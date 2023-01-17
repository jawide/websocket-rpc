aux_source_directory(. SOURCES)
add_executable(wrpc ${SOURCES})
find_package(protobuf CONFIG REQUIRED)
target_link_libraries(wrpc PUBLIC protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)