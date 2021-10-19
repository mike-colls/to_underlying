cmake_minimum_required(VERSION 3.20)

project(to_underlying VERSION 0.0.0 LANGUAGES CXX)

add_library(to_underlying)

file(GLOB sources CONFIGURE_DEPENDS src/*.cpp)
target_sources(to_underlying PRIVATE ${sources})

file(GLOB headers CONFIGURE_DEPENDS include/mc/*.hpp)
target_sources(to_underlying PRIVATE ${headers})

target_include_directories(to_underlying PUBLIC include)

target_compile_features(to_underlying PRIVATE cxx_std_20)

if(MSVC)
  target_compile_options(to_underlying PRIVATE /W4 /WX)
endif()
