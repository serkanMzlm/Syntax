cmake_minimum_required(VERSION  3.0.0) #cmake çalışması için yüklü olması gereken minimum cmake sürümü
set(CMAKE_CXX_STANDARD 17) # C versiyonunu  ayarlıyoruz.
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
project(hello VERSION 1.0) #Projeye isim ve versiyon veriyoruz
file(GLOBAL_RECURSE SRC_FILES src/*.cpp)
add_executable(hello main.cpp ${SRC_FILES}) #hello adında bir yürütülebilir dosya oluşturuyoruz.
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc) 


