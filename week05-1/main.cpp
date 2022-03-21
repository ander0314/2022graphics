#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix(); ///口訣:減一半、除一半, y還倒過來
    glRotatef(angle,0,0,1);///旋轉的角度
    glColor3f(1,1,0);///黃色的
        glutSolidTeapot(0.3);///茶壼
    glPopMatrix();
    glutSwapBuffers();

}

void motion (int x,int y)
{
    angle+=(x-oldX);
    oldX=x;
    display();

}
int main( int argc, char**argv )
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week05 rotate");

    glutDisplayFunc(display);///Display顯示
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
}
