#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,0);///黃色的
        glutSolidTeapot(0.3);///茶壼
    glutSwapBuffers();

}
void keyboard(unsigned char key ,int x,int y)
{
    printf("現在按下:%c 座標在: %d %d\n",key,x,y);
}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05=6 keyboard");

    glutDisplayFunc(display);///Display顯示
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
