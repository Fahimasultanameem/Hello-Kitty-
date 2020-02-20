
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <math.h>


static float	tx	=  0.0;
static float	ty	=  0.0;

//float p=-2.3;
void DrawCircle(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}
void display(void)
{
    ///ear
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslated(35,35,0);
    glRotated(30,0,0,1);
    DrawCircle(0,0,15,30,500);
    glPopMatrix();

    glPushMatrix();
    glTranslated(90,0,0);
    glRotated(-180,0,1,0);
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslated(35,35,0);
    glRotated(30,0,0,1);
    DrawCircle(0,0,15,30,500);
    glPopMatrix();
    glPopMatrix();

    ///face
    glColor3f(1,1,1);
    DrawCircle(45,32,33.5,24.5,500);
    ///ear
    glColor3ub(255, 153, 204);
    glPushMatrix();
    glTranslated(35,35,0);
    glRotated(30,0,0,1);
    DrawCircle(0,0,12,27,500);
    glPopMatrix();

    glPushMatrix();
    glTranslated(90,0,0);
    glRotated(-180,0,1,0);
    glPushMatrix();
    glTranslated(35,35,0);
    glRotated(30,0,0,1);
    DrawCircle(0,0,12,27,500);
    glPopMatrix();
    glPopMatrix();

    ///face
    glColor3ub(255, 153, 204);
    DrawCircle(45,32,31,22,500);

    ///left
    ///mocch1
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(5,29);
    glVertex2d(5.2,29.2);
    glVertex2d(5.6,29.6);
    glVertex2d(6,30);
    glVertex2d(7,30.2);
    glVertex2d(8,30.35);
    glVertex2d(9,30.5);
    glVertex2d(10,30.7);
    glVertex2d(11,30.9);
    glVertex2d(15,30.9);
    glVertex2d(16,30.6);
    glVertex2d(17,30.4);
    glVertex2d(18.5,30);
    glVertex2d(19,29.8);
    glVertex2d(19,29.6);
    glVertex2d(18.8,29.4);
    glVertex2d(18,28.8);
    glVertex2d(17,28.8);
    glVertex2d(16,28.9);
    glVertex2d(11,28.9);
    glVertex2d(10,28.8);
    glVertex2d(9,28.6);
    glVertex2d(6,28.2);
    glVertex2d(5.5,28.5);
    glEnd();

    ///mocch2
    glPushMatrix();
    glTranslated(15,-7,0);
    glRotated(25,0,0,1);

    glBegin(GL_POLYGON);
    glVertex2d(5,29);
    glVertex2d(5.2,29.2);
    glVertex2d(5.6,29.6);
    glVertex2d(6,30);
    glVertex2d(7,30.2);
    glVertex2d(8,30.35);
    glVertex2d(9,30.5);
    glVertex2d(10,30.7);
    glVertex2d(11,30.9);
    glVertex2d(15,30.9);
    glVertex2d(16,30.6);
    glVertex2d(17,30.4);
    glVertex2d(18.5,30);
    glVertex2d(19,29.8);
    glVertex2d(19,29.6);
    glVertex2d(18.8,29.4);
    glVertex2d(18,28.8);
    glVertex2d(17,28.8);
    glVertex2d(16,28.9);
    glVertex2d(11,28.9);
    glVertex2d(10,28.8);
    glVertex2d(9,28.6);
    glVertex2d(6,28.2);
    glVertex2d(5.5,28.5);
    glEnd();
    glPopMatrix();
     ///mocch3
    glPushMatrix();
    glTranslated(30,-8,0);
    glRotated(50,0,0,1);
    glBegin(GL_POLYGON);
    glVertex2d(5,29);
    glVertex2d(5.2,29.2);
    glVertex2d(5.6,29.6);
    glVertex2d(6,30);
    glVertex2d(7,30.2);
    glVertex2d(8,30.35);
    glVertex2d(9,30.5);
    glVertex2d(10,30.7);
    glVertex2d(11,30.9);
    glVertex2d(15,30.9);
    glVertex2d(16,30.6);
    glVertex2d(17,30.4);
    glVertex2d(18.5,30);
    glVertex2d(19,29.8);
    glVertex2d(19,29.6);
    glVertex2d(18.8,29.4);
    glVertex2d(18,28.8);
    glVertex2d(17,28.8);
    glVertex2d(16,28.9);
    glVertex2d(11,28.9);
    glVertex2d(10,28.8);
    glVertex2d(9,28.6);
    glVertex2d(6,28.2);
    glVertex2d(5.5,28.5);
    glEnd();
    glPopMatrix();



    ///right
    glPushMatrix();
    glTranslated(90,0,0);
    glRotated(-180,0,1,0);

    ///mocch1
    glBegin(GL_POLYGON);
    glVertex2d(5,29);
    glVertex2d(5.2,29.2);
    glVertex2d(5.6,29.6);
    glVertex2d(6,30);
    glVertex2d(7,30.2);
    glVertex2d(8,30.35);
    glVertex2d(9,30.5);
    glVertex2d(10,30.7);
    glVertex2d(11,30.9);
    glVertex2d(15,30.9);
    glVertex2d(16,30.6);
    glVertex2d(17,30.4);
    glVertex2d(18.5,30);
    glVertex2d(19,29.8);
    glVertex2d(19,29.6);
    glVertex2d(18.8,29.4);
    glVertex2d(18,28.8);
    glVertex2d(17,28.8);
    glVertex2d(16,28.9);
    glVertex2d(11,28.9);
    glVertex2d(10,28.8);
    glVertex2d(9,28.6);
    glVertex2d(6,28.2);
    glVertex2d(5.5,28.5);
    glEnd();
    ///mocch2
    glPushMatrix();
    glTranslated(15,-7,0);
    glRotated(25,0,0,1);

    glBegin(GL_POLYGON);
    glVertex2d(5,29);
    glVertex2d(5.2,29.2);
    glVertex2d(5.6,29.6);
    glVertex2d(6,30);
    glVertex2d(7,30.2);
    glVertex2d(8,30.35);
    glVertex2d(9,30.5);
    glVertex2d(10,30.7);
    glVertex2d(11,30.9);
    glVertex2d(15,30.9);
    glVertex2d(16,30.6);
    glVertex2d(17,30.4);
    glVertex2d(18.5,30);
    glVertex2d(19,29.8);
    glVertex2d(19,29.6);
    glVertex2d(18.8,29.4);
    glVertex2d(18,28.8);
    glVertex2d(17,28.8);
    glVertex2d(16,28.9);
    glVertex2d(11,28.9);
    glVertex2d(10,28.8);
    glVertex2d(9,28.6);
    glVertex2d(6,28.2);
    glVertex2d(5.5,28.5);
    glEnd();
    glPopMatrix();
     ///mocch3
    glPushMatrix();
    glTranslated(30,-8,0);
    glRotated(50,0,0,1);
    glBegin(GL_POLYGON);
    glVertex2d(5,29);
    glVertex2d(5.2,29.2);
    glVertex2d(5.6,29.6);
    glVertex2d(6,30);
    glVertex2d(7,30.2);
    glVertex2d(8,30.35);
    glVertex2d(9,30.5);
    glVertex2d(10,30.7);
    glVertex2d(11,30.9);
    glVertex2d(15,30.9);
    glVertex2d(16,30.6);
    glVertex2d(17,30.4);
    glVertex2d(18.5,30);
    glVertex2d(19,29.8);
    glVertex2d(19,29.6);
    glVertex2d(18.8,29.4);
    glVertex2d(18,28.8);
    glVertex2d(17,28.8);
    glVertex2d(16,28.9);
    glVertex2d(11,28.9);
    glVertex2d(10,28.8);
    glVertex2d(9,28.6);
    glVertex2d(6,28.2);
    glVertex2d(5.5,28.5);
    glEnd();
    glPopMatrix();
    glPopMatrix();


    ///eye
    glColor3f(1,1,1);
    DrawCircle(28.5,26.5,2,3.5,500);
    DrawCircle(61,26.5,2,3.5,500);
    glColor3f(0,0,0);
    DrawCircle(28.5,25.8,1.5,1.8,500);
    DrawCircle(61,25.8,1.5,1.8,500);
    glColor3f(1,1,1);
    DrawCircle(29,26,.5,.6,500);
    DrawCircle(61.5,26,.5,.6,500);
    ///nose
    glColor3f(1,1,1);
    DrawCircle(45,21.5,3.7,2.7,500);
    glColor3ub(255, 77, 166);
    DrawCircle(45,21.5,2,1.2,500);



    glPushMatrix();
    glTranslated(63,48,0);
    glRotated(-25,0,0,1);
    ///hair clip
    glColor3f(1,1,1);
    DrawCircle(-7,0,10,13,500);
    DrawCircle(7,0,10,13,500);
    glColor3ub(255, 77, 166);
    DrawCircle(-7,0,8,10,500);
    DrawCircle(7,0,8,10,500);
    ///
    glColor3f(1,1,1);
    DrawCircle(0,0,13,5.5,500);
    glColor3ub(255, 77, 166);
    DrawCircle(0,0,10,5,500);
    ///
    glColor3f(1,1,1);
    DrawCircle(0,0,7,7,500);
    glColor3ub(255, 77, 166);
    DrawCircle(0,0,5,5,500);
    ///HAIR CLIP END
    glPopMatrix();

	glFlush();
}
void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	 glOrtho(0, 100, 0, 100, -1.0, 1.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (600, 600);
	glutInitWindowPosition (100, 0);
	glutCreateWindow ("circle");
	init();
    glutDisplayFunc(display);
	//glutKeyboardFunc(my_keyboard);
	//glutSpecialFunc(spe_key);
	//glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}

