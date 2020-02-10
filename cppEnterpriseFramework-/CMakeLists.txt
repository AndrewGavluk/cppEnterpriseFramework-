cmake_minimum_required (VERSION 3.2)

if($ENV{TRAVIS_BUILD_NUMBER})
 project(CppEnterpriseFramework VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
else()
 project(CppEnterpriseFramework VERSION 1.1.999)
endif()

# linking Boost unit test framework

#find_package(GTest REQUIRED)

configure_file (Config.h.in Config.h)

# 1. Main
add_executable(MainF Main.cpp)
# 2. add lib
add_library(EntityCommon EntityCommon.cpp)
# 3. add gtest
#add_executable(GTest GTest.cpp)

#set_target_properties(MainF Entity GTest PROPERTIES
set_target_properties(MainF EntityCommon PROPERTIES
    CXX_STANDARD 14 
	CXX_STANDARD_REQUIRED ON
)
# 2. include lib
target_include_directories(EntityCommon
	PRIVATE "${CMAKE_BINARY_DIR}")
#target_link_libraries(GTest ${GTEST_LIBRARIES} MainF)

# 2. link lib
target_link_libraries (MainF PRIVATE EntityCommon)

# set target compile options
if (MSVC)
	target_compile_options(MainF	PRIVATE /W4)
	target_compile_options(EntityCommon	PRIVATE /W4)
	#target_compile_options(GTest	PRIVATE /W4)
	else ()  
	target_compile_options(MainF	PRIVATE -Wall -Wextra -pedantic -Werror)
	target_compile_options(EntityCommon	PRIVATE -Wall -Wextra -pedantic -Werror)
	#target_compile_options(GTest	PRIVATE -Wall -Wextra -pedantic -Werror)
endif()

install(TARGETS EntityCommon RUNTIME DESTINATION bin)

# set cpack parametrs
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT gavl.andr96@gmail.com)

include(CPack)
enable_testing()

# 3. add 
#add_test(GTest GTest)