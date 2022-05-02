#include <opencv/highgui.h>
int main()
{
    IplImage * img = cyLoadImage("data/Diffuse.jpg");
    cvShowImage("week11", img);
    cvWaitKey(0);

}
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)
    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能
    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID
    glGenTextures(1, &id); /// 產生Generate 貼圖ID
    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
	return id;
}
void display ()
{

glClear (GL COLOR BUFFER BIT | GL DEPTH BUFFER BIT) ;
if ( pmodel
NUIL )1///程式放這裡
pmodel
=
glmReadOBJ ( "data/gundam. obj
）;///讀人模型
glmUnitize ( pmodel)i///把模烈R ded
調整成單应大小
-1
gimFacetNormals ( pmodel ) ;
///扣『acet面的法间量Nozma1s拿
glmVertexNormals ( pmodel
90 ): ///H
Vertex的法向量，月
glmDraw(pmodel
glutSwapBuffers();
GIM IEXT
}
void display()
{
    glclear (GL COLOR BUFFER BIT | GL DEPTH BUFFER BIT) :
glutSolidTeapot. ( 0.3 ) ;
glutSwapBuffers0) ;
}
int main (int arg, char *argv)
{
    glutInit ( sarge,argv);
glutInitDisplayMode(TUT DOUBLE | GLUT_ DEPTH) ;
glutCreateWindow ( "week11 gundam") ;

glutDisplayFunc (display) ;
myTexture ("data/Diffuse.jpg"):
glutMainLoop ();
}
