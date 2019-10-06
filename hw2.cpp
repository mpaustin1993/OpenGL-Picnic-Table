/*******************************************************
 * Homework 2: OpenGL                                  *
 * CS 148 (Summer 2016), Stanford University           *
 *-----------------------------------------------------*
 * First, you should fill in problem1(), problem2(),   *
 * and problem3() as instructed in the written part of *
 * the problem set.  Then, express your creativity     *
 * with problem4()!                                    *
 *                                                     *
 * Note: you will only need to add/modify code where   *
 * it says "TODO".                                     *
 *                                                     *
 * The left mouse button rotates, the right mouse      *
 * button zooms, and the keyboard controls which       *
 * problem to display.                                 *
 *                                                     *
 * For Linux/OS X:                                     *
 * To compile your program, just type "make" at the    *
 * command line.  Typing "make clean" will remove all  *
 * computer-generated files.  Run by typing "./hw2"    *
 *                                                     *
 * For Visual Studio:                                  *
 * You can create a project with this main.cpp and     *
 * build and run the executable as you normally would. *
 *******************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>


#if __APPLE__
    #include <GLUT/glut.h>
#else
	#include <GL/glut.h>
#endif

using namespace std;

bool leftDown = false, rightDown = false;
int lastPos[2];
float cameraPos[4] = {0,1,4,1};
int windowWidth = 640, windowHeight = 480;
double yRot = 0;

//change the number to display different examples

int curProblem = 4; // TODO: change this number to try different examples

float specular[] = { 1.0, 1.0, 1.0, 1.0 };
float shininess[] = { 50.0 };

void problem1() {

	//renders 10 teapots:
	//teapots are translated in varying increments of .50 along the x and y axes
	//and rotated in varying increments of 20 and 40 degrees along the z axis

	//one teapot along the positive x axis

	//1st
	glPushMatrix();
	glTranslatef(1, 0, 0);	
	glutSolidTeapot(0.2);
	glPopMatrix();

	//two teapots in quadrant one

	//2nd
	glPushMatrix();
	glTranslatef(.75, .50, 0);
	glRotatef(40, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//3rd
	glPushMatrix();
	glTranslatef(.25, .75, 0);
	glRotatef(80, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//two teapots in quadrant two

	//4th
	glPushMatrix();
	glTranslatef(-.25, .75, 0);
	glRotatef(100, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//5th
	glPushMatrix();
	glTranslatef(-.75, .50, 0);
	glRotatef(140, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//one teapot along the negative x axis

	//6th
	glPushMatrix();
	glTranslatef(-1, .0, 0);
	glRotatef(180, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//two teapots in the third quadrant

	//7th
	glPushMatrix();
	glTranslatef(-.75, -.50, 0);
	glRotatef(220, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//8th
	glPushMatrix();
	glTranslatef(-.25, -.75, 0);
	glRotatef(260, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//two teapots in the fourth quadrant

	//9th
	glPushMatrix();
	glTranslatef(.25, -.75, 0);
	glRotatef(280, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//10th
	glPushMatrix();
	glTranslatef(.75, -.50, 0);
	glRotatef(320, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();
}


void problem2() {

	//renders 15 blocks:
	//block rendering starts at -1 along the x axis and 0 on the y axis
	//blocks are translated in consistent decrements of -.15 units along the x axis, and .015 units on the y axis to adjust their positions due to their increasing size
	//blocks are scaled by consistent increments of .2 units along the y axis to make every block bigger than the last and render the appearance of a staircase


	//1
	glPushMatrix();
	glTranslatef(-1, 0, 0);
	glutSolidCube(0.15);
	glPopMatrix();

	//2
	glPushMatrix();
	glTranslatef(-.85, .015, 0);
	glScalef(1, 1.2, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//3
	glPushMatrix();
	glTranslatef(-.70, .030, 0);
	glScalef(1, 1.4, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//4
	glPushMatrix();
	glTranslatef(-.55, .045, 0);
	glScalef(1, 1.6, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//5
	glPushMatrix();
	glTranslatef(-.40, .060, 0);
	glScalef(1, 1.8, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//6
	glPushMatrix();
	glTranslatef(-.25, .075, 0);
	glScalef(1, 2.0, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//7
	glPushMatrix();
	glTranslatef(-.10, .090, 0);
	glScalef(1, 2.2, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//8
	glPushMatrix();
	glTranslatef(.05, .105, 0);
	glScalef(1, 2.4, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//9
	glPushMatrix();
	glTranslatef(.20, .12, 0);
	glScalef(1, 2.6, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//10
	glPushMatrix();
	glTranslatef(.35, .135, 0);
	glScalef(1, 2.8, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//11
	glPushMatrix();
	glTranslatef(.50, .150, 0);
	glScalef(1, 3.0, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//12
	glPushMatrix();
	glTranslatef(.65, .165, 0);
	glScalef(1, 3.2, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//13
	glPushMatrix();
	glTranslatef(.80, .180, 0);
	glScalef(1, 3.4, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//14
	glPushMatrix();
	glTranslatef(.95, .195, 0);
	glScalef(1, 3.6, 1);
	glutSolidCube(0.15);
	glPopMatrix();

	//15
	glPushMatrix();
	glTranslatef(1.05, .210, 0);
	glScalef(1, 3.8, 1);
	glutSolidCube(0.15);
	glPopMatrix(); 

}

void problem3() {

	//renders 21 teapots
	//each level of teapot contains a number of teapots corresponding to its level (for instance, the 2nd level contains 2 teapots)
	//the teapots of each level are rendered equidistant from one another, and from the teapots of the preceding level
	

	//1st level
	glPushMatrix();
	glTranslatef(0, 1, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//2nd level

	glPushMatrix();
	glTranslatef(-.5, .5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(.5, .5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//3rd level

	glPushMatrix();
	glTranslatef(-1, 0, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//4th level

	glPushMatrix();
	glTranslatef(-1.5, -.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, -.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.5, -.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//5th level

	glPushMatrix();
	glTranslatef(-2.0, -1, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1, -1, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -1, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1, -1, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2, -1, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	//6th level

	glPushMatrix();
	glTranslatef(-2.5, -1.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.5, -1.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.5, -1.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, -1.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.5, -1.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.5, -1.5, 0);
	glutSolidTeapot(0.2);
	glPopMatrix();
	
    
}

void problem4() {

	//renders a a gazebo with roof, table, four chairs, and a center piece

	//Roof Supports
	//rendered by glutSolidCube() to produce four narrow rectangular prisms elongated along the y axis	

	glPushMatrix();
	glTranslatef(1, 0, 1);
	glScalef(.5, 8, .5);
	glutSolidCube(0.15);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1, 0, 1);
	glScalef(.5, 8, .5);
	glutSolidCube(0.15);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1, 0, -1);
	glScalef(.5, 8, .5);
	glutSolidCube(0.15);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1, 0, -1);
	glScalef(.5, 8, .5);
	glutSolidCube(0.15);
	glPopMatrix();

	//Roof
	//rendered by glutSolidCone() to produce a large triangular prism --> cone reduced down to four faced prism via reducing the # of faces

	glPushMatrix();
	glTranslatef(0, .6, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-45, 0, 0, 1);
	glutSolidCone(1.50, .75, 4, 25);
	glPopMatrix();

	//Ground
	//rendered by glutSolidSphere() by scaling the y axis way down to .01 and widening the x axis of the sphere

	glPushMatrix();
	glTranslatef(0, -.60, 0);
	glScalef(3, .01, 3);
	glutSolidSphere(.4, 4, 20);
	glPopMatrix();

	//Table Support
	//rendered by glutSolidCube() to produce one narrow rectangular prisms elongated along the y axis

	glPushMatrix();
	glTranslatef(0, -.40, 0);
	glScalef(.4, 3.5, .5);
	glutSolidCube(0.15);
	glPopMatrix();

	//Table Top
	//rendered by glutSolidSphere() by scaling the y axis way down to .20 and widening the x axis of the sphere

	glPushMatrix();
	glTranslatef(0, -.15, 0);
	glScalef(3, .20, 3);
	glutSolidSphere(.15, 4, 20);
	glPopMatrix();

	//Table Centerpiece
	//two triangles rendered via coordinates fed directly to create a center piece

	glBegin(GL_TRIANGLES);	
	glVertex3f(-.20, -.20, 0);
	glVertex3f(.20, -.20, 0);
	glVertex3f(0, .20, 0);
	glEnd();

	glBegin(GL_TRIANGLES);	
	glVertex3f(0, -.20, -.20);
	glVertex3f(0, -.20, .20);
	glVertex3f(0, .20, 0);
	glEnd();		

	//Chairs
	//nested application of glPushMatrix() to produce four chairs
	//rendered via glutSolidCube()

	glPushMatrix();
		glPushMatrix();
		glTranslatef(.5, -.5, 0);
		glutSolidCube(0.30);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, -.5, .5);
		glutSolidCube(0.30);
		glPopMatrix();
	
		glPushMatrix();
		glTranslatef(-.5, -.5, 0);
		glutSolidCube(0.30);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0, -.5, -.5);
		glutSolidCube(0.30);
		glPopMatrix();
	glPopMatrix();

}


void display() {
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glDisable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glBegin(GL_LINES);
		glColor3f(1,0,0); glVertex3f(0,0,0); glVertex3f(1,0,0); // x axis
		glColor3f(0,1,0); glVertex3f(0,0,0); glVertex3f(0,1,0); // y axis
		glColor3f(0,0,1); glVertex3f(0,0,0); glVertex3f(0,0,1); // z axis
	glEnd(/*GL_LINES*/);

	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glEnable(GL_LIGHT0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0,0,windowWidth,windowHeight);

	float ratio = (float)windowWidth / (float)windowHeight;
	gluPerspective(50, ratio, 1, 1000);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(cameraPos[0], cameraPos[1], cameraPos[2], 0, 0, 0, 0, 1, 0);

	glLightfv(GL_LIGHT0, GL_POSITION, cameraPos);

	glRotatef(yRot,0,1,0);

	if (curProblem == 1) problem1();
	if (curProblem == 2) problem2();
	if (curProblem == 3) problem3();
	if (curProblem == 4) problem4();

	glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) leftDown = (state == GLUT_DOWN);
	else if (button == GLUT_RIGHT_BUTTON) rightDown = (state == GLUT_DOWN);

	lastPos[0] = x;
	lastPos[1] = y;
}

void mouseMoved(int x, int y) {
	if (leftDown) yRot += (x - lastPos[0])*.1;
	if (rightDown) {
		for (int i = 0; i < 3; i++)
			cameraPos[i] *= pow(1.1,(y-lastPos[1])*.1);
	}

	lastPos[0] = x;
	lastPos[1] = y;
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
	curProblem = key-'0';
    if (key == 'q' || key == 'Q' || key == 27){
        exit(0);
    }
	glutPostRedisplay();
}

void reshape(int width, int height) {
	windowWidth = width;
	windowHeight = height;
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("HW2");

	glutDisplayFunc(display);
	glutMotionFunc(mouseMoved);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);

	glutMainLoop();

	return 0;
}
