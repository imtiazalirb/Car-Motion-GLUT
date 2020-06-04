#include<cstdio>
#include<windows.h>
#include <mmsystem.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
void display();
void idle();
void drawGrid();
void drawQuad(GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat);
void drawQuadGradient(GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat);
void drawLine(GLfloat , GLfloat , GLfloat , GLfloat);
void drawTriangle(GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat);
void drawCircle(GLfloat,GLfloat,GLfloat);
//void drawHalfCircle(GLfloat,GLfloat,GLfloat);
//void drawCircle(GLfloat,GLfloat,GLfloat);
//void drawElipse(GLfloat x,GLfloat y,GLfloat radius,GLfloat xx,GLfloat yy,int start);
void update2(int value);
void parkView();
void update();
void handleKeypress(unsigned char , int , int );
void drawClouds();
void cityScapeSky();
void cityScapeRoad();
void dayCityScape();
void carLeft();
void carRight();
void update4 (int value);
void drawRectangle(GLdouble x, GLdouble y, GLdouble w, GLdouble h);
void drawQuadGradient3ub(GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3,GLfloat r,GLfloat g,GLfloat b);
void grass2();
void grass3();
void grass4();
void grass5();
void tree1();
void tree2();
void lamp1();
void lamp2();
void lamp3();
void grass();
void grass1();
void parkSky();
void parkroad();
void parkGrass();
void dayParkView();
void nightParkView();
void update9(int value);
void update11(int value);
void update10(int value);

bool day=true;
bool isCarRight=false;
bool secondScene=false;
bool firstScene=true;
bool thirdScene=false;
GLfloat sunPosition = 0.2f;
GLfloat sunSpeed = 0.0044f;
GLfloat moonPosition=0.2f;
GLfloat moonSpeed=0.0044f;
GLfloat carPosition = 1.0f;
GLfloat carSpeed = 0.0055f;
GLfloat cloudPosition=0.0f;
GLfloat cloudSpeed=0.008f;
GLfloat cloud2Position=0.2f;
GLfloat cloud2Speed=0.008f;

void parkSky()
{
    glLoadIdentity();
    glColor3f(0.6,0.6,1);
    drawQuadGradient3ub(1,1,1,0.3,-1,0.3,-1,1, 0,0,235);

}

void drawQuadGradient3ub(GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3,GLfloat r,GLfloat g,GLfloat b)
{
    glBegin(GL_QUADS);

    glVertex2f(x0,y0);

    glVertex2f(x1,y1);

    glColor3ub(r,g,b);

    glVertex2f(x2,y2);

    glVertex2f(x3,y3);

    glEnd();
}

void parkGrass()
{
    glColor3ub(0,55,0);
    drawQuadGradient3ub(-1,-0.4,1,-0.4,1,-1,-1,-1,3,155,0);

}
void grass()/////EVERY GRASS HAS TWO PARTS
{
    glPushMatrix();
    float x=0.6;
    float y=-0.8;

    glTranslatef(-1.3,-0.4,0);
    glScalef(2.5,0.4,0);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.1);
    glVertex2f(-0.245+x,-0.20+y);
    glVertex2f(-0.230+x,0+y);
    glVertex2f(-0.220+x,0.10+y);
    glVertex2f(-0.240+x,0+y);
    glVertex2f(-0.230+x,0.30+y);
    glVertex2f(-0.250+x,0.10+y);
    glVertex2f(-0.255+x,0.50+y);

    glColor3f(0.6,0.8,0.1);
    glVertex2f(-0.260+x,0.10+y);
    glVertex2f(-0.280+x,0.30+y);
    glVertex2f(-0.270+x,0.0+y);
    glVertex2f(-0.290+x,0.10+y);
    glVertex2f(-0.280+x,0.0+y);
    glVertex2f(-0.265+x,-0.20+y);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

}
void grass1()
{
     glPushMatrix();
    float x=1;
    float y=-0.4;

    glTranslatef(-1.3,-0.4,0);
    glScalef(2.5,0.4,0);
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.1);
    glVertex2f(-0.245+x,-0.20+y);
    glVertex2f(-0.230+x,0+y);
    glVertex2f(-0.220+x,0.10+y);
    glVertex2f(-0.240+x,0+y);
    glVertex2f(-0.230+x,0.30+y);
    glVertex2f(-0.250+x,0.10+y);
    glVertex2f(-0.255+x,0.50+y);
    glColor3f(0.6,0.8,0.1);
    glVertex2f(-0.260+x,0.10+y);
    glVertex2f(-0.280+x,0.30+y);
    glVertex2f(-0.270+x,0.0+y);
    glVertex2f(-0.290+x,0.10+y);
    glVertex2f(-0.280+x,0.0+y);
    glVertex2f(-0.265+x,-0.20+y);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

}
void grass2()
{
     glPushMatrix();
    float x=0.5;
    float y=-0.4;

    glTranslatef(-1.3,-0.4,0);
    glScalef(2.5,0.4,0);
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.1);
    glVertex2f(-0.245+x,-0.20+y);
    glVertex2f(-0.230+x,0+y);
    glVertex2f(-0.220+x,0.10+y);
    glVertex2f(-0.240+x,0+y);
    glVertex2f(-0.230+x,0.30+y);
    glVertex2f(-0.250+x,0.10+y);
    glVertex2f(-0.255+x,0.50+y);
    glColor3f(0.6,0.8,0.1);
    glVertex2f(-0.260+x,0.10+y);
    glVertex2f(-0.280+x,0.30+y);
    glVertex2f(-0.270+x,0.0+y);
    glVertex2f(-0.290+x,0.10+y);
    glVertex2f(-0.280+x,0.0+y);
    glVertex2f(-0.265+x,-0.20+y);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

}
void grass3()
{
    glPushMatrix();
    float x=0.9;
    float y=-0.9;

    glTranslatef(-1.3,-0.4,0);
    glScalef(2.5,0.4,0);
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.1);
    glVertex2f(-0.245+x,-0.20+y);
    glVertex2f(-0.230+x,0+y);
    glVertex2f(-0.220+x,0.10+y);
    glVertex2f(-0.240+x,0+y);
    glVertex2f(-0.230+x,0.30+y);
    glVertex2f(-0.250+x,0.10+y);
    glVertex2f(-0.255+x,0.50+y);
    glColor3f(0.6,0.8,0.1);
    glVertex2f(-0.260+x,0.10+y);
    glVertex2f(-0.280+x,0.30+y);
    glVertex2f(-0.270+x,0.0+y);
    glVertex2f(-0.290+x,0.10+y);
    glVertex2f(-0.280+x,0.0+y);
    glVertex2f(-0.265+x,-0.20+y);
    glEnd();
    glPopMatrix();

    glLoadIdentity();

}
void grass4()
{
     glPushMatrix();
    float x=0.8;
    float y=-0.4;

    glTranslatef(-1.3,-0.4,0);
    glScalef(2.5,0.4,0);
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.1);
    glVertex2f(-0.245+x,-0.20+y);
    glVertex2f(-0.230+x,0+y);
    glVertex2f(-0.220+x,0.10+y);
    glVertex2f(-0.240+x,0+y);
    glVertex2f(-0.230+x,0.30+y);
    glVertex2f(-0.250+x,0.10+y);
    glVertex2f(-0.255+x,0.50+y);
    glColor3f(0.6,0.8,0.1);
    glVertex2f(-0.260+x,0.10+y);
    glVertex2f(-0.280+x,0.30+y);
    glVertex2f(-0.270+x,0.0+y);
    glVertex2f(-0.290+x,0.10+y);
    glVertex2f(-0.280+x,0.0+y);
    glVertex2f(-0.265+x,-0.20+y);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}

void grass5()
{
     glPushMatrix();
    float x=0.75;
    float y=-1.2;

    glTranslatef(-1.3,-0.4,0);
    glScalef(2.5,0.4,0);
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.1);
    glVertex2f(-0.245+x,-0.20+y);
    glVertex2f(-0.230+x,0+y);
    glVertex2f(-0.220+x,0.10+y);
    glVertex2f(-0.240+x,0+y);
    glVertex2f(-0.230+x,0.30+y);
    glVertex2f(-0.250+x,0.10+y);
    glVertex2f(-0.255+x,0.50+y);
    glColor3f(0.6,0.8,0.1);
    glVertex2f(-0.260+x,0.10+y);
    glVertex2f(-0.280+x,0.30+y);
    glVertex2f(-0.270+x,0.0+y);
    glVertex2f(-0.290+x,0.10+y);
    glVertex2f(-0.280+x,0.0+y);
    glVertex2f(-0.265+x,-0.20+y);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}
//tree
void tree1(bool day)
{

    if(day==true)
    {
    glPushMatrix();
    glScalef(1,0.5,0);
    glTranslatef(1,1.7,0);
    //tree1
    glColor3ub(97, 29, 30);////BRUNCH
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42, 122, 59);////LEAF
      drawCircle(-0.77,-0.3,0.15);
      drawCircle(-0.59,-0.3,0.15);
      drawCircle(-0.67,-0.2,0.2);
    glPopMatrix();
    }
    else
    {

  glPushMatrix();
    glScalef(1,0.5,0);
    glTranslatef(1,1.7,0);
    //tree1
    glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0.8,0.2,0.3, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    glColor3ub(0, 0, 0);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);
glDisable(GL_LIGHTING);

GLfloat global_ambient1[] = {0.42,1.22,0.59, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
  glEnable(GL_LIGHTING);
    glColor3ub(255, 255, 255);
    drawCircle(-0.77,-0.3,0.15);
    drawCircle(-0.59,-0.3,0.15);
    drawCircle(-0.67,-0.2,0.2);
    glDisable(GL_LIGHTING);
    glPopMatrix();
    }
}

void tree2(bool day)
{
    if(day==true){
    glPushMatrix();
    glScalef(1,0.5,0);
    glTranslatef(0.2,1.7,0);
    //tree1
    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42, 122, 59);
    drawCircle(-0.77,-0.3,0.15);
    drawCircle(-0.59,-0.3,0.15);
    drawCircle(-0.67,-0.2,0.2);
    glPopMatrix();
    }
    else
    {
        glPushMatrix();
        glScalef(1,0.5,0);
    glTranslatef(0.2,1.7,0);
        glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0.8,0.2,0.3, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);
glDisable(GL_LIGHTING);

GLfloat global_ambient1[] = {0.42,1.22,0.59, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
  glEnable(GL_LIGHTING);
    glColor3ub(42, 122, 59);
    drawCircle(-0.77,-0.3,0.15);
    drawCircle(-0.59,-0.3,0.15);
    drawCircle(-0.67,-0.2,0.2);
    glDisable(GL_LIGHTING);
    glPopMatrix();
    }
}
void parkroad()
{
    glColor3f(0,0.3,0.3);
  drawQuad(-1,-0.3,1,-0.3, 1,0.1,-1, 0.1);//road
  glColor3f(0.1,0.6,0.4);
  drawQuad(-1,-0.3, -1,-0.4, 1,-0.4, 1,-0.3);//roadside
  glColor3f(0.1,0.6,0.4);
  drawQuad(-1,0.1, -1,0.2, 1,0.2, 1,0.1);//roadside
  glColor3f(1,1,1);
  drawQuad(-0.95,-0.08 ,-0.95,-0.12, -0.65,-0.12, -0.65,-0.08);//white1
  float x=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);//white5
  glColor3f(0.4,0.4,0);
  drawQuad(-1,0.5,-1,0.2, 1,0.2,1,0.5);
}
void lamp1()
{
    glColor3f(0.1,0.4,0.3);
  drawQuad(-0.8,0.22, -0.75,0.22, -0.75,0.33,-0.8,0.33);
  drawQuad(-0.78,0.33, -0.76,0.33, -0.76,0.63,-0.78,0.63);
  drawLine(-0.83,0.63, -0.71,0.63);
  drawLine(-0.83,0.63, -0.83,0.56);
  drawLine(-0.71,0.63, -0.71,0.56);
  drawTriangle(-0.83,0.57,-0.85,0.55, -0.81,0.55);//LIGHTleft
  drawTriangle(-0.71,0.57,-0.73,0.55, -0.69,0.55);//LIGHTright
  glColor3f(204,204,0);
  drawQuad(-0.85,0.55,-0.83,0.5 ,-0.81,0.55,-0.83,0.55);
  drawQuad(-0.73,0.55, -0.71,0.5,-0.69,0.55,-0.71,0.55);
}
void lamp2()
{
    float x=0.75;
   glColor3f(0.1,0.4,0.3);
  drawQuad(-0.8+x,0.22, -0.75+x,0.22, -0.75+x,0.33,-0.8+x,0.33);
  drawQuad(-0.78+x,0.33, -0.76+x,0.33, -0.76+x,0.63,-0.78+x,0.63);
  drawLine(-0.83+x,0.63, -0.71+x,0.63);
  drawLine(-0.83+x,0.63, -0.83+x,0.56);
  drawLine(-0.71+x,0.63, -0.71+x,0.56);
  drawTriangle(-0.83+x,0.57,-0.85+x,0.55, -0.81+x,0.55);//LIGHTleft
  drawTriangle(-0.71+x,0.57,-0.73+x,0.55, -0.69+x,0.55);//LIGHTright
  glColor3f(204,204,0);
  drawQuad(-0.85+x,0.55,-0.83+x,0.5 ,-0.81+x,0.55,-0.83+x,0.55);
  drawQuad(-0.73+x,0.55, -0.71+x,0.5,-0.69+x,0.55,-0.71+x,0.55);
}
void lamp3()
{
        float x=1.5;
   glColor3f(0.1,0.4,0.3);
  drawQuad(-0.8+x,0.22, -0.75+x,0.22, -0.75+x,0.33,-0.8+x,0.33);
  drawQuad(-0.78+x,0.33, -0.76+x,0.33, -0.76+x,0.63,-0.78+x,0.63);
  drawLine(-0.83+x,0.63, -0.71+x,0.63);
  drawLine(-0.83+x,0.63, -0.83+x,0.56);
  drawLine(-0.71+x,0.63, -0.71+x,0.56);
  drawTriangle(-0.83+x,0.57,-0.85+x,0.55, -0.81+x,0.55);//LIGHTleft
  drawTriangle(-0.71+x,0.57,-0.73+x,0.55, -0.69+x,0.55);//LIGHTright
  glColor3f(204,204,0);
  drawQuad(-0.85+x,0.55,-0.83+x,0.5 ,-0.81+x,0.55,-0.83+x,0.55);
  drawQuad(-0.73+x,0.55, -0.71+x,0.5,-0.69+x,0.55,-0.71+x,0.55);
}



void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
      case 'a':
      isCarRight=false;
       break;
      case 'd':
     isCarRight=true;
     break;
      case 's':
    carSpeed=0.0;
        break;
     case 'w':
     carSpeed=0.0080f;
    break;
glutPostRedisplay();
     }
}



void drawRectangle(GLdouble x, GLdouble y, GLdouble w, GLdouble h) {
    glBegin(GL_QUADS);

        glVertex2f(x, y);
        glVertex2f(x, y + h);
        glVertex2f(x - w, y + h);
        glVertex2f(x - w, y);

    glEnd();
}
void update4 (int value)
{

       if(carPosition < -1.71)
       {
         carPosition = 1.30f;
       }

       if(carPosition>1.31)
       {
           carPosition=-1.71;
       }
       if(isCarRight==true)
        carPosition += carSpeed;
        else
            carPosition-=carSpeed;


	glutPostRedisplay();


	glutTimerFunc(1000/60, update4, 0);
}


void update3(int value)
{
    if(day==false)
    {
        moonPosition=moonPosition-moonSpeed;
    }
    else
        {
            moonPosition=0.2f;
        }

    glutPostRedisplay();

	glutTimerFunc(1000/60, update3, 0);
}





void update2(int value)
{
	glutPostRedisplay();
	glutTimerFunc(4100, update2, 0);
	if(day==true)
    {
        day=false;
    }
    else
    {
        day=true;
    }
}

void update(int value)
{
    if(day==true)
    {
        sunPosition=sunPosition-sunSpeed;
    }
    else
        {
            sunPosition=0.2f;
        }

    glutPostRedisplay();

	glutTimerFunc(1000/60, update, 0);

}
void idle()
{
    glutPostRedisplay();
}

void drawCircle(GLfloat x,GLfloat y,GLfloat radius)
{
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	//glColor3ub(255, 0, 191);
		for(i = 0; i <= lineAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / lineAmount)),y + (radius* sin(i * twicePi / lineAmount)));

		}
	glEnd();
}

void drawElipse(GLfloat x,GLfloat y,GLfloat radius,GLfloat xx,GLfloat yy,int start)
{
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(141, 173, 194);
		for(i = start; i <= lineAmount;i++)
        {
			glVertex2f(x + ( (radius-xx) * cos(i *  twicePi / lineAmount)),y + ( (radius-yy )* sin(i * twicePi / lineAmount)));

		}
	glEnd();
}

void drawHalfCircle(GLfloat x,GLfloat y,GLfloat radius)
{
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	//glColor3ub(255, 0, 191);
		for(i = 50; i <= lineAmount;i++)
        {
			glVertex2f(x + (radius * cos(i *  twicePi / lineAmount)),y + (radius* sin(i * twicePi / lineAmount)));

		}
	glEnd();
}


void drawQuad(GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3)
{
    glBegin(GL_QUADS);

    glVertex2f(x0,y0);

    glVertex2f(x1,y1);

    glVertex2f(x2,y2);

    glVertex2f(x3,y3);

    glEnd();
}
void drawQuadGradient(GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3,GLfloat r,GLfloat g,GLfloat b)
{

    glBegin(GL_QUADS);

    glVertex2f(x0,y0);

    glVertex2f(x1,y1);

    glColor3f(r,g,b);

    glVertex2f(x2,y2);

    glVertex2f(x3,y3);


    glEnd();
}


void drawLine(GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1)
{
    glBegin(GL_LINES);

    glVertex2f(x0,y0);

    glVertex2f(x1,y1);

    glEnd();
}


void drawTriangle(GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    glBegin(GL_TRIANGLES);

    glVertex2f(x0,y0);

    glVertex2f(x1,y1);

    glVertex2f(x2,y2);

    glEnd();
}

void cityScapeSky()
{
    glColor3f(0,0.7,1);
    drawQuadGradient(-1,1,1,1,1,0.1,-1,0.1,1,1,1);
}

void cityScapeRoad()
{
  glColor3f(0.7,0.7,0.7);
  drawQuadGradient(-1,-0.3,1,-0.3, 1,0.1,-1, 0.1,0,0,0);//road
  glColor3f(0.5,0.5,0.5);
  drawQuadGradient(-1,-0.3, -1,-0.4, 1,-0.4, 1,-0.3,0.3,0.3,0.3);//roadside
  glColor3f(0.5,0.5,0.5);
  drawQuadGradient(-1,0.1, -1,0.2, 1,0.2, 1,0.1,0.3,0.3,0.3);//roadside
  glColor3f(1,1,1);
  drawQuad(-0.95,-0.08 ,-0.95,-0.12, -0.65,-0.12, -0.65,-0.08);//white1
  float x=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);//white5



}
void cityScapeWall()
{
    float x=0,y=0;
    glColor3b(51, 0, 0);
    drawQuad(-1,-0.4,1,-0.4,1,-0.7,-1,-0.7);
    glColor3b(99, 0, 0);
    drawQuad(-0.9,-0.5,-0.85,-0.5,-0.85,-0.52,-0.9,-0.52);////COLOUR BRICKS
    y=-0.15;x=0.5;
    drawQuad(-0.9+x,-0.5+y,-0.85+x,-0.5+y,-0.85+x,-0.52+y,-0.9+x,-0.52+y);////COLOUR BRICKS
    y=0.05;x=0.3;
    drawQuad(-0.9+x,-0.5+y,-0.85+x,-0.5+y,-0.85+x,-0.52+y,-0.9+x,-0.52+y);////COLOUR BRICKS
}
void cityScapeSea()
{
    glColor3f(0,124,255);
    drawQuadGradient(-1,-0.7,1,-0.7,1,-1,-1,-1,0,0,1);


}
void cityScapeDrawFence()
{
    glPushMatrix();
    glColor3ub(255,255,0);
    drawQuad(-0.9,-0.4,-0.88,-0.4,-0.88,-0.2,-0.9,-0.2);
    float x = 0.1;
    while(x<2)
        {
        //glTranslated(pushXVariable,0,0);
        drawQuad(-0.9+x,-0.4,-0.88+x,-0.4,-0.88+x,-0.2,-0.9+x,-0.2);
        x+=0.1;
        }

    drawQuad(-1,-0.4,1,-0.4,1,-0.44,-1,-0.44);
    drawQuad(-1,-0.24,1,-0.24,1,-0.22,-1,-0.22);
    glPopMatrix();


}

void cityScapeBuildings()
{


    glPushMatrix();
    glTranslated(0,0.1,0);
    /////BUILDING 1
    glColor3f(255,0,0);
    drawQuadGradient(-1,0.5,-1,0.1,-0.9,0.1,-0.9,0.55,0.5,0.5,0.5);
     glColor3f(255,0,0);
    drawQuadGradient(-0.9,0.55,-0.9,0.1,-0.7,0.1,-0.7,0.5,0.5,0.5,0.5);
    /////BUILDING 2
    glColor3f(0,204,0);
    drawQuadGradient(-0.45,0.1,-0.45,0.7,-0.2,0.65,-0.2,0.1,0.3,0.3,0.3);
    /////BUILDING 3
    glColor3ub(214, 214, 194);
    drawQuadGradient(-0.7,0.1,-0.4,0.1,-0.4,0.6,-0.7,0.6,0.7,0.7,0.5);
    /////BUILDING 4
    glTranslated(0.52,0,0);
    glColor3ub(0,0,204);
    drawQuadGradient(-0.7,0.1,-0.4,0.1,-0.4,0.55,-0.7,0.55,0.7,0.7,0.5);



     glColor3ub(214, 214, 194);
    drawQuadGradient(-0.65,0.55, -0.45,0.55, -0.45,0.6,-0.65,0.6, 0.7,0.7,0.5);
     glColor3ub(214, 214, 194);
    drawQuadGradient(-0.62,0.6,-0.48,0.6,-0.48,0.65,-0.62,0.65,   0.7,0.7,0.5);
     glColor3ub(214, 214, 194);
    drawQuadGradient(-0.58,0.65,-0.54,0.65, -0.54,0.8, -0.58,0.75 ,  0.7,0.7,0.5);



    glPopMatrix();


}
//// WINDOWS COLOUR
void windows(GLfloat x,GLfloat y,GLfloat z,bool day)
{
    glPushMatrix();
    glScalef(0.8,0.8,0.0);
    glTranslatef(x,y,z);


    if(day==true)
    {
        glColor3ub(255,255,255);
    }
    else
    {
        glColor3ub(255, 191, 0);
    }
    drawQuad(0.10,0.6,0.0,0.6,0.0,0.45,0.10,0.45);
    glColor3ub(0, 0, 0);
    drawQuad(0.12,0.45,-0.02,0.45,-0.02,0.43,0.12,0.43);
     drawQuad(0.12,0.45+0.15,-0.02,0.45+0.15,-0.02,0.43+0.15,0.12,0.43+0.15);
     glPopMatrix();
}

void dayCityScape()
{



    cityScapeSky();
    cityScapeBuildings();
    //sun
    glPushMatrix();
    glTranslatef(0.0,sunPosition,0.0);
     glColor3ub(255, 198, 26);
    drawCircle(0.7,0.9,0.11);

    glPopMatrix();



    cityScapeRoad();
    cityScapeWall();
    cityScapeSea();
    cityScapeDrawFence();
    //cityScapeDrawFencePark();
    //tower building window anti clockwise
    windows(0.0,0.15,0.0,true);
    windows(-0.18,0.15,0.0,true);
    windows(0.0,-0.10,0.0,true);
    windows(-0.18,-0.10,0.0,true);
    //left of tower building
    windows(-0.4,0.25,0.0,true);
    windows(-0.4,0.0,0.0,true);
    //right of 3D building
    windows(-0.65,0.20,0.0,true);
     windows(-0.65,-0.05,0.0,true);
     windows(-0.82,0.20,0.0,true);
     windows(-0.82,-0.05,0.0,true);
     if(carPosition>0.8)
     {
         carPosition=0.8;
     }

}
void nightCityScape()
{
    glLoadIdentity();
  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0.0,0.0,0.5, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
  cityScapeSky();
  glDisable(GL_LIGHTING);


 glEnable(GL_LIGHTING);
 GLfloat global_ambient1[] = {1.0,0.0,0.0, 0.1};
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
 cityScapeWall();
 glDisable(GL_LIGHTING);

 glEnable(GL_LIGHTING);
 GLfloat global_ambient2[] = {0.0,0,1.4, 0.0};
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
cityScapeSea();
glDisable(GL_LIGHTING);

cityScapeBuildings();

//moon
     glPushMatrix();
    glTranslatef(0.0,moonPosition,0.0);
     glColor3ub(255, 255, 255);
    drawCircle(0.7,0.9,0.11);
    glPopMatrix();
    cityScapeRoad();
    cityScapeDrawFence();
    //cityScapeDrawFencePark();
    //tower building window anti clockwise
    windows(0.0,0.15,0.0,false);
    windows(-0.18,0.15,0.0,false);
    windows(0.0,-0.10,0.0,false);
    windows(-0.18,-0.10,0.0,false);
    //left of tower building
    windows(-0.4,0.25,0.0,false);
    windows(-0.4,0.0,0.0,false);
    //right of 3D building
    windows(-0.65,0.20,0.0,false);
     windows(-0.65,-0.05,0.0,false);
     windows(-0.82,0.20,0.0,false);
     windows(-0.82,-0.05,0.0,false);
    if(carPosition>0.8)
     {
         carPosition=0.8;
     }
}
void carLeft()
{
    glPushMatrix();
    glTranslatef(carPosition,-0.1,0.0);
    glScalef(0.3,0.3,0);
    glScalef(-1,1,1);
    glColor3ub(255,0,0);
	drawRectangle(0.4, -0.2, 0.8, 0.4);
			// front bumper
			drawQuad(0.55, -0.2,0.55, -0.05,0.4, 0.2,0.4, -0.2);
			drawQuad(-0.4,-0.2,-0.4,0.2,-0.48,0.22,-0.48,-0.2);//rear spoiler
			drawQuad(0.2, 0.2,0.15, 0.23,-0.15, 0.23,-0.2, 0.2);//top hood



			glColor3ub(255,255,255);
			// rear window
			drawQuad(-0.01,-0.02,-0.01,0.15,-0.35,0.15,-0.35,-0.02);
			// front window
			drawQuad(0.4,-0.02,0.3,0.15,0.03,0.15,0.03,-0.02);

		// front wheel
		glColor3ub(0, 0, 0);
		drawCircle(0.35, -0.2, 0.125 );
		glColor3ub(240,240,240);
		drawCircle(0.35, -0.2, 0.1);

	// rear wheel
		glColor3ub(0,0,0);
		drawCircle(-0.25, -0.2, 0.125);
		glColor3ub(240,240,240);
		drawCircle(-0.25, -0.2, 0.1);
		glPopMatrix();
}
void carRight()
{
    glPushMatrix();
    glTranslatef(carPosition,0.05,0.0);
    glScalef(0.3,0.3,0);

    glColor3ub(255,0,0);
	drawRectangle(0.4, -0.2, 0.8, 0.4);
			// front bumper
			drawQuad(0.55, -0.2,0.55, -0.05,0.4, 0.2,0.4, -0.2);
			drawQuad(-0.4,-0.2,-0.4,0.2,-0.48,0.22,-0.48,-0.2);//rear spoiler
			drawQuad(0.2, 0.2,0.15, 0.23,-0.15, 0.23,-0.2, 0.2);//top hood



			glColor3ub(255,255,255);
			// rear window
			drawQuad(-0.01,-0.02,-0.01,0.15,-0.35,0.15,-0.35,-0.02);
			// front window
			drawQuad(0.4,-0.02,0.3,0.15,0.03,0.15,0.03,-0.02);

		// front wheel
		glColor3ub(0, 0, 0);
		drawCircle(0.35, -0.2, 0.125 );
		glColor3ub(240,240,240);
		drawCircle(0.35, -0.2, 0.1);

	// rear wheel
		glColor3ub(0,0,0);
		drawCircle(-0.25, -0.2, 0.125);
		glColor3ub(240,240,240);
		drawCircle(-0.25, -0.2, 0.1);
		glPopMatrix();
}
void dayParkView()
{
    parkSky();
    parkroad();
    parkGrass();
    grass();
    grass1();
    grass2();
    grass3();
    grass4();
    grass5();
    lamp1();
    lamp2();
    lamp3();
    tree1(day);
    tree2(day);
}


void nightParkView()
{
  glLoadIdentity();
  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0.0,0.0,0.5, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
  parkSky();
  glDisable(GL_LIGHTING);



    parkroad();

  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient2[] = {0.0,1.1,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
  parkGrass();
  glDisable(GL_LIGHTING);




  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient3[] = {0.0,1.9,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
  grass();
    grass1();
    grass2();
    grass3();
    grass4();
    grass5();

  glDisable(GL_LIGHTING);


    lamp1();
    glPushMatrix();
    glTranslatef(-0.89,0.2,0.0);
    glScalef(0.3,1.5,0.1);
    glColor4ub(230, 230, 0,100);
    drawTriangle(0.2,0.2,0.0,0.0,0.4,0.0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.77,0.2,0.0);
    glScalef(0.3,1.5,0.1);
    glColor4ub(230, 230, 0,100);
    drawTriangle(0.2,0.2,0.0,0.0,0.4,0.0);
    glPopMatrix();

    lamp2();
    glPushMatrix();
    glTranslatef(-0.02,0.2,0.0);
    glScalef(0.3,1.5,0.1);
    glColor4ub(230, 230, 0,100);
    drawTriangle(0.2,0.2,0.0,0.0,0.4,0.0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.14,0.2,0.0);
    glScalef(0.3,1.5,0.1);
    glColor4ub(230, 230, 0,100);
    drawTriangle(0.2,0.2,0.0,0.0,0.4,0.0);
    glPopMatrix();




    lamp3();
    glPushMatrix();
    glTranslatef(0.61,0.2,0.0);
    glScalef(0.3,1.5,0.1);
    glColor4ub(230, 230, 0,100);
    drawTriangle(0.2,0.2,0.0,0.0,0.4,0.0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.73,0.2,0.0);
    glScalef(0.3,1.5,0.1);
    glColor4ub(230, 230, 0,100);
    drawTriangle(0.2,0.2,0.0,0.0,0.4,0.0);
    glPopMatrix();
    tree1(day);
    tree2(day);
}


void mountainRoad()
{
  glColor3f(0.7,0.7,0.7);
  drawQuad(-1,-0.3, 1,-0.3, 1,0.1, -1, 0.1);//road
  glColor3f(0.9,0.9,0.8);
  drawQuad(-1,-0.3, -1,-0.4, 1,-0.4, 1,-0.3);//roadside
  glColor3f(0.9,0.9,0.8);
  drawQuad(-1,0.1, -1,0.2, 1,0.2, 1,0.1);//roadside
  glColor3f(1,1,1);
  drawQuad(-0.95,-0.08 ,-0.95,-0.12, -0.65,-0.12, -0.65,-0.08);//white1
  float x=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);
  x+=0.4;
  drawQuad(-0.95+x,-0.08 ,-0.95+x,-0.12, -0.65+x,-0.12, -0.65+x,-0.08);//white5
}
void mountainSky()
{
    glColor3ub(142, 198, 212);
    drawQuad(-1,1, -1,0.1, 1,0.1, 1,1);
}
void mountainCloud()
{
    glPushMatrix();
    glTranslatef(cloudPosition,0.0, 0.0f);
   //cloud 1
    glColor3ub(242, 242, 242);
    drawCircle(-0.8,0.8, 0.1);
    glColor3ub(255,255,255);
    drawCircle(-0.7,0.85,0.1);
    glColor3ub(242, 242, 242);
    drawCircle(-0.7,0.75,0.1);
    drawCircle(-0.6,0.8,0.1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2Position,0.0,0.0f);
    glTranslatef(0.8,0,0);
    glColor3ub(242, 242, 242);
    drawCircle(-0.8,0.8, 0.1);
    glColor3ub(255,255,255);
    drawCircle(-0.7,0.85,0.1);
    glColor3ub(242, 242, 242);
    drawCircle(-0.7,0.75,0.1);
    drawCircle(-0.6,0.8,0.1);
    glPopMatrix();

}
void update9(int value)
{
    if(cloudPosition<-1.5)
    {
        cloudPosition=2.0f;
    }
    if(cloudPosition>2.0)
       {
           cloudPosition=-1.5;
       }
      cloudPosition -= cloudSpeed;
      glutPostRedisplay();
      glutTimerFunc(25, update9, 0);
}
void update10(int value)
{
    if(cloud2Position<-1.5)
    {
        cloud2Position=2.0f;
    }
    if(cloud2Position>2.0)
       {
           cloud2Position=-1.5;
       }
      cloud2Position += cloud2Speed;
      glutPostRedisplay();
      glutTimerFunc(25, update10, 0);
}
void mountain()
{

    glColor3ub(255,255,255);
    drawTriangle(-0.87,0.6, -1,0.2, -0.5,0.2);
    drawTriangle(-0.47,0.75, -0.75,0.2, 0.1,0.2);
    drawTriangle(-0.2,0.87, -0.68,0.2, 0.3,0.2);
    drawTriangle(0,0.9, -0.5,0.2, 0.4,0.2);
    drawTriangle(0.4,0.76, 0.1,0.2, 0.7,0.2);
    drawTriangle(0.6,0.82, 0.2,0.2, 1,0.2);


    glColor3ub(183, 194, 201);
    drawTriangle(0,0.85, -0.5,0.2, 0.4,0.2);//3


    //glColor3ub(200, 211, 219);
    drawTriangle(-0.2,0.82, -0.68,0.2, 0.3,0.2);//4


    glColor3ub(200, 211, 219);
    drawTriangle(-0.87,0.5, -1,0.2, -0.5,0.2);//1


    //glColor3ub(183, 194, 201);
    drawTriangle(-0.47,0.65, -0.75,0.2, 0,0.2);//2


    glColor3ub(200, 211, 219);
    drawTriangle(0.4,0.70, 0.1,0.2, 0.7,0.2);//5

    //glColor3ub(183, 194, 201);
    drawTriangle(0.6,0.75, 0.2,0.2, 1,0.2);//6

    //drawTriangle(0.57,0.6, 1,0.2, 0.4,0.2);
}


void mountainJungle()
{
    glColor3ub(17, 168, 87);
    drawQuad(-1,-0.75, -1,-1, 1,-1, 1,-0.75);
    //tree1
    glPushMatrix();
    glScalef(0.6,0.6,0);
    glTranslatef(-0.7,-0.6,0);
    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42, 122, 59); //leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);

    glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();


    //tree3
    glPushMatrix();
    glScalef(0.5,0.5,0);
    glTranslatef(0.2,-0.8,0);

    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42,122,59); //leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);

    glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();


    //tree2
    glPushMatrix();
    glScalef(0.65,0.6,0);
    glTranslatef(0,-0.65,0);

    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42,122,59);//leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);

        glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();


      //tree5(middle)
    glPushMatrix();
    glScalef(0.6,0.65,0);
    glTranslatef(1.3,-0.5,0);

    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42,122,59); //leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);

    glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();

    //tree4
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(0.8,-0.4,0);

    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);


    glColor3ub(42, 122, 59); //leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);


    glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();


    //tree6(middle 2)
    glPushMatrix();
    glScalef(0.7,0.7,0);
    glTranslatef(1.5,-0.4,0);

    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42, 122, 59); //leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);

    glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();

    //tree7
    glPushMatrix();
    glScalef(0.6,0.6,0);
    glTranslatef(2,-0.6,0);

    glColor3ub(97, 29, 30);
    drawQuad(-0.7,-0.5, -0.7,-0.9, -0.65,-0.9, -0.65,-0.5);
    drawQuad(-0.8,-0.35, -0.7,-0.5, -0.65,-0.5, -0.75,-0.3);
    drawQuad(-0.60,-0.3, -0.68,-0.45, -0.65,-0.5, -0.58,-0.35);

    glColor3ub(42, 122, 59);//leaf

    drawTriangle(-0.7,0, -0.95,-0.45, -0.4,-0.45);
    drawTriangle(-0.7,0.1, -0.95,-0.35, -0.4,-0.35);
    drawTriangle(-0.7,0.15, -0.95,-0.25, -0.4,-0.25);

    glColor3ub(10, 105, 54);
    drawTriangle(-0.85,-0.6, -0.7,-0.9, -0.7,-0.8);

    glPopMatrix();

}
void mountainCar()
{

}

void mountainScenery()
{


	mountainSky();
	mountainCloud();
	mountainRoad();
    mountain();
  //  mountainRail();
    mountainJungle();
    if(carPosition<-0.8)
    {
        carPosition=-0.8;
    }

}

void nightMountainScenery()
{

  glLoadIdentity();
  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0.1, 0.1, 0.7, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
  mountainSky();
  glDisable(GL_LIGHTING);


glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient1[] = {0.8, 0.8, 0.8, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
 mountainCloud();
  glDisable(GL_LIGHTING);
mountainRoad();
glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient2[] = {1.8, 1.8, 1.8, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
mountain();
  glDisable(GL_LIGHTING);


//mountainRail();



    glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient3[] = {0.0,0.5,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
mountainJungle();
  glDisable(GL_LIGHTING);

//    snow();
    if(carPosition<-0.8)
    {
        //carPosition=-0.8;
    }



}
void display()
{
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if(day==true && secondScene==false && firstScene==true)
    {
       dayCityScape();
//       citySound();
    }
    else if(firstScene==true && secondScene==false)
    {
        nightCityScape();
    }
    if(firstScene==true && carPosition<-1.1)
    {
        //load tarins code
        carPosition=1.0;
        secondScene=true;
        firstScene=false;
    }
    else if(secondScene==true && carPosition>1.1)
    {
        carPosition=-1.0;
        firstScene=true;
        secondScene=false;
    }


    if(day == true && secondScene==true)
    {
        dayParkView();
    }
    else if(day==false && secondScene==true)
    {
        nightParkView();
    }


    if(secondScene==true && carPosition<-1.1)
    {
        carPosition=1.0;
        secondScene=false;
        thirdScene=true;
    }
    else if(thirdScene==true && carPosition>1.1)
    {
        carPosition=-1.0;
        secondScene=true;
        thirdScene=false;
    }


    if(day == true && thirdScene==true)
    {
        mountainScenery();
    }
    else if(day==false && thirdScene==true)
    {
        nightMountainScenery();
    }
    if(isCarRight==false)
    {
        carLeft();
        if(thirdScene==true)
        {
//            snow();
        }
    }
	else
    {
        carRight();
        if(thirdScene==true)
        {
      //      snow();
        }
	}
    glutSwapBuffers();
    glFlush();

}

int main(int argc,char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(620, 620);
    glutInitWindowPosition(1920/2 - 310,1080/2 - 310);
    glutCreateWindow("Test");
    glutDisplayFunc(display);
     glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

    glEnable(GL_BLEND);
    glutIdleFunc(idle);

    glutKeyboardFunc(handleKeypress);

    glutTimerFunc(1000/60, update, 0);
    glutTimerFunc(4100,update2,0);
    glutTimerFunc(1000/60, update3, 0);
    glutTimerFunc(1000/60, update4, 0);
    //glutTimerFunc(30, update11, 0);
    glutTimerFunc(25,update9,0);
    glutTimerFunc(25,update10,0);
    glutMainLoop();
    return 0;

}
