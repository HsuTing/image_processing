# Image Processing 

## Start

Clone opencv in version 3.0.0:
```
  cd AR

  git clone --branch 3.0.0 https://github.com/Itseez/opencv.git
```

Build:
```
  mkdir build

  cd build

  cmake -G "Unix Makefiles" ../opencv/
```

Make opencv:
```
  make -j8

  sudo make install
```

Make uninstall opencv:
```
  sudo make uninstall
```

## Requirement

### cmake

- Ubuntu
```
  sudo apt-get install cmake
```

- Mac
```
  brew install cmake
```

## Development environment

- Mac OS X 10.11
- If you are other os, you may need to modify `extraLib` and `extraMod` in `Makefile`.

## Library

### opencv

- version: 3.0.0
- [website](http://opencv.org)
- [github](https://github.com/Itseez/opencv)
