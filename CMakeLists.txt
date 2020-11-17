cmake_minimum_required (VERSION 3.16)

project (my_game)

add_subdirectory ("lib")

add_executable (my_game 
	"src/main.cpp"
)
target_link_libraries (my_game PUBLIC rabbit)
target_compile_features (my_game PUBLIC cxx_std_17)
