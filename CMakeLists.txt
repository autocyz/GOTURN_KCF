cmake_minimum_required(VERSION 2.8)
project(mygoturn)
# avoid "can not find -lopencv_dep_cudart"
set(CUDA_USE_STATIC_CUDA_RUNTIME OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(Boost COMPONENTS system filesystem regex REQUIRED)



find_package( OpenCV REQUIRED )
message("Open CV version is ${OpenCV_VERSION}")


find_package(Caffe REQUIRED)
include_directories(${Caffe_INCLUDE_DIRS})
add_definitions(${Caffe_DEFINITIONS})    # ex. -DCPU_ONLY
message("Caffe_DIR is ${Caffe_DIR}")

#add_library (${PROJECT_NAME}
#
#        src/network/regressor.cpp
#        src/network/regressor_base.cpp
#        src/tracker/tracker.cpp
#        src/helper/helper.cpp
#        src/helper/bounding_box.cpp
#        src/helper/image_proc.cpp
#
#        src/visualizer/runTracker.cpp
#
#        src/loader/loader_base.cpp
#        src/loader/loader_base.h
#
#
#        src/network/regressor.h
#        src/network/regressor_base.h
#        src/tracker/tracker.h
#        src/helper/helper.h
#        src/helper/bounding_box.h
#        src/helper/image_proc.h
#       )

include_directories(src)

FILE(GLOB_RECURSE SOURCE_FILES "src/*.cpp")
add_executable(runTracker ${SOURCE_FILES})
target_link_libraries(runTracker ${OpenCV_LIBS} ${Caffe_LIBRARIES} ${Boost_LIBRARIES})
