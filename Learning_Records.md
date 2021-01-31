### 一、图像的深度与通道

1、图像的深度

​	图片是由一个个像素点构成，所有的不同颜色的像素点构成了一副完整的图像，计算机储存图片是以二进制的方式来储存的。

​	1bit：用一位来储存，则这个像素点的取值范围是0或1，在我们看来，这个图片的要么是黑色，要么是白色。4bit：取值范围是0到2的4次方。8bit：取值范围为0到2的8次方。

​	所以，我们把计算机储存的单个像素点所用到的 bit 称为图像的深度。

2、图像的通道

​	知道了图片的深度信息，如果是24位的图像，他的取值范围是0到2的24次方，这个取值是相当大的，那么怎么根据某图像的深度值来确定哪一个像素点的颜色呢?

​	颜色的三元素Red, Green, Blue. 如果是深度为24=3\*8，我们刚好可以用第一个8位存储Red值，第二个存储Green值，第三个存储Blue值, 2的8次方刚好是255,所以我们一般看到的RGB值都是(0-255,0-255,0-255)这样的值。如果用RGB来表示图片的颜色值，我们称这样的图片通道为三。

### 二、直方图均衡化

​	直方图均衡化是图像处理领域中利用图像直方图对图像的对比度进行调整的方法，这种方法通常用来增加许多图像的全局对比度，尤其是当图像的有用数据的对比度相当接近的时候。通过这种方法，亮度可以更好地在直方图上分布。这样就可以用于增强局部的对比度而不影响整体的对比度，直方图均衡化通过有效地扩展常用的亮度来实现这种功能。

### 三、OpenCV入门
##### 深度学习环境Opencv环境配置
​ ​ ​ ​ Cmake命令：安装在/home/saudades/anaconda3/envs/tenko

​ cmake -D BUILD_TIFF=ON -D BUILD_opencv_java=OFF -D WITH_CUDA=OFF -D ENABLE_AVX=ON -D WITH_OPENGL=ON -D WITH_OPENCL=ON -D WITH_IPP=ON -D WITH_TBB=ON -D WITH_GTK=ON -D WITH_EIGEN=ON -D WITH_V4L=ON -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D BUILD_NEW_PYTHON_SUPPORT=ON -D CMAKE_BUILD_TYPE=RELEASE -D BUILD_opencv_python2=OFF -D BUILD_EXAMPLES=ON -D CMAKE_INSTALL_PREFIX=/home/saudades/anaconda3/envs/tenko -D PYTHON3_EXECUTABLE=/home/saudades/anaconda3/envs/tenko/bin/python3 -D INSTALL_PYTHON_EXAMPLES=ON -D INSTALL_C_EXAMPLES=ON -DPYTHON3_INCLUDE_DIR=/home/saudades/anaconda3/envs/tenko/include/python3.6m -D PYTHON3_PACKAGES_PATH=/home/saudades/anaconda3/envs/tenko/lib/python3.6/site-packages ..
