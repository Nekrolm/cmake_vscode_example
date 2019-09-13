build_systems: build_release build_debug


# generate build systems
build_release: CMakeLists.txt
	mkdir -p release
	cd release && cmake -DCMAKE_BUILD_TYPE=Release ..

build_debug: CMakeLists.txt
	mkdir -p debug
	cd debug && cmake -DCMAKE_BUILD_TYPE=Debug ..


#build
release_bin: release
	cmake --build release

debug_bin: debug
	cmake --build debug

release: build_release

debug: build_debug



clean:
	rm -rf release
	rm -rf debug
	
format:
	clang-format -i src/*


.PHONY: clean format