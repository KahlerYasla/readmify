# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(readmify)

set(CMAKE_CXX_STANDARD 14)

# Add your source files
set(SOURCE_FILES
        # Source files
        src/main.cpp
        src/cli/Interface.cpp
        src/cli/components/LoadingBar.cpp
        src/services/extractors/extractProjectDependencies.cpp
        src/services/extractors/extractProjectPrimitives.cpp
        src/services/extractors/extractProjectStructure.cpp
        src/services/extractors/extractProjectFunctions.cpp
        )

# Add the executable to the ../bin directory
add_executable(readmify ${SOURCE_FILES})
set_target_properties(readmify PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Configure compiler warnings and other flags as needed

# Specify any additional libraries if needed

# Add any other necessary configurations

# Add include directories to the include path
target_include_directories(readmify PRIVATE src/include src/constants src/cli/components src src/services)

# Define a custom target to generate documentation
add_custom_target(rux
        COMMAND readmify
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        )
