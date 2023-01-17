@echo off

:main
if "%1"=="-h" goto help
if "%1"=="--help" goto help
set language=%1
set proto=%2
set proto_name=%~n2%
if "%language%"=="python" goto python
if "%language%"=="js" goto js
if "%language%"=="javascript" goto js
if "%language%"=="cpp" goto cpp
goto help
goto end

:python
protoc --python_out=. --pyi_out=. %proto%
goto end

:js
set exist_node_modules=false
if exist node_modules set exist_node_modules=true
call npm install google-protobuf
call npm install browserify -g
protoc --js_out=import_style=commonjs,binary:. %proto%
call browserify %proto_name%_pb.js -o %proto_name%_pb_browserify.js
if %exist_node_modules%==false (
    rd  /Q /S node_modules
    del /Q /S package-lock.json
)
del /Q /S %proto_name%_pb.js
goto end

:cpp
protoc --cpp_out=. %proto%
goto end

:help
echo description: protobuf generate tool
echo usage: tool [-h] language proto
@echo.
echo positional arguments:
echo   language    [python, js]
echo   proto
@echo.
goto end

:end