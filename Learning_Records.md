##### 深度学习环境Opencv环境配置
​ ​ ​ ​ Cmake命令：安装在/home/saudades/anaconda3/envs/tenko

cmake -D BUILD_TIFF=ON -D BUILD_opencv_java=OFF -D WITH_CUDA=OFF -D ENABLE_AVX=ON -D WITH_OPENGL=ON -D WITH_OPENCL=ON -D WITH_IPP=ON -D WITH_TBB=ON -D WITH_GTK=ON -D WITH_EIGEN=ON -D WITH_V4L=ON -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D BUILD_NEW_PYTHON_SUPPORT=ON -D CMAKE_BUILD_TYPE=RELEASE -D BUILD_opencv_python2=OFF -D BUILD_EXAMPLES=ON -D CMAKE_INSTALL_PREFIX=/home/saudades/anaconda3/envs/tenko -D PYTHON3_EXECUTABLE=/home/saudades/anaconda3/envs/tenko/bin/python3 -D INSTALL_PYTHON_EXAMPLES=ON -D INSTALL_C_EXAMPLES=ON -DPYTHON3_INCLUDE_DIR=/home/saudades/anaconda3/envs/tenko/include/python3.6m -D PYTHON3_PACKAGES_PATH=/home/saudades/anaconda3/envs/tenko/lib/python3.6/site-packages ..


### Windows 下 Anaconda 配置国内源相关设置（C盘下隐藏文件）
```
channels:
  - http://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/
  - http://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/conda-forge/
  - http://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/msys2/
  - http://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/bioconda/
  - http://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/
show_channel_urls: true
ssl_verify: false
```
