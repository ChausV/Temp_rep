cmake_minimum_required (version 3.5)
project (muprog)
set (PROG_SOURCES
	$(PROJECT_SOURCE_DIR)/main.cpp
)
add_executable (myprog $(PROG_SOURCES))
