//#include "stdafx.h"

#include <glut.h>


int shoulder = 0,elbow = 0,leftleg=0,rightleg=0;
int LKnee = 0, RKnee = 0;
int LShoulder = 0, RShoulder = 0;
int RElbow = 0, LElbow = 0;
int flag = 1;
float xTranslation = 0.0 , yTranslation = 0.0, zTranslation = 0.0;
float xRotation = 0.0, yRotation = 0.0;

bool mouse_Lbutton_pressed   =   false;   
bool mouse_Rbutton_pressed   =   false;   
bool mouse_Mbutton_pressed   =   false;   

float  mouse_Rdownx = 0 ;
float  mouse_Rdowny = 0;
float  mouse_Ldownx = 0 ;
float  mouse_Ldowny = 0;	
float  mouse_Mdownx = 0 ;
float  mouse_Mdowny = 0;

void init(void) 
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
}

void drawHead()
{
	glPushMatrix();
	   glTranslatef (0.0, 2.3, 0.0);
	   glutWireCube (1.0);           
	   glPopMatrix();
}

void drawNeck()
{
	glPushMatrix();
	glTranslatef (0.0, 1.7, 0.0);
	glScalef (0.4, 0.2, 0.2);
	glutWireCube (1.0);           
	glPopMatrix();	
}

void drawBody()
{
	glPushMatrix();
	glTranslatef (0.0, 0.2, 0.0);
	glScalef (1.8, 2.8, 1.0);
	glutWireCube (1.0);
	glPopMatrix();
}

/**********************��첲**********************/

void drawLeftLimb()    
{
	//���
	glPushMatrix();
	glTranslatef (1.1, 0.7, 0.0);     
	
	glTranslatef (1.1, 0.7, 0.0); 
	glRotatef ((GLfloat) LShoulder, 1.0, 0.0, 0.0);
	glTranslatef (-1.1, -0.7, 0.0); 
	
	glPushMatrix();
	glScalef (0.4, 1.4, 0.6);
	glutWireCube (1.0);
	glPopMatrix();
	
	//С��
	glTranslatef (0, -0.7, 0.0);
	glRotatef ((GLfloat) LElbow, 1.0, 0.0, 0.0);
	glTranslatef (0, -0.7, 0.0);
	
	glPushMatrix();
	glScalef (0.4, 1.4, 0.6);
	glutWireCube (1.0);
	glPopMatrix();
	//��
	glTranslatef (0, -0.8, 0.0);
	
	glPushMatrix();
	glScalef (0.3, 0.3, 0.2);
	glutWireCube (1.0);   
	glPopMatrix(); 
	
    glPopMatrix();
}

/**********************�Ҹ첲**********************/

void drawRightLimb()
{
	//���
	glPushMatrix();
	glTranslatef (-1.1, 0.7, 0.0);
	
	glTranslatef (-1.1, 0.7, 0.0);
	glRotatef ((GLfloat) RShoulder, 1.0, 0.0, 0.0);
	glTranslatef (1.1, -0.7, 0.0);
	
	glPushMatrix();
	glScalef (0.4, 1.4, 0.6);
	glutWireCube (1.0);
	glPopMatrix();
	
	
	//С��
	glTranslatef (0, -0.7, 0.0);
	glRotatef ((GLfloat) RElbow, 1.0, 0.0, 0.0);
	glTranslatef (0, -0.7, 0.0);
	
	glPushMatrix();
	glScalef (0.4, 1.4, 0.6);
	glutWireCube (1.0);
	glPopMatrix();
	//��
	glTranslatef (0, -0.8, 0.0);
	
	glPushMatrix();
	glScalef (0.3, 0.3, 0.2);
	glutWireCube (1.0);   
	glPopMatrix();
	glPopMatrix();
}

/**********************����**********************/

void drawLeftleg()
{
	//����
	glPushMatrix();
	glTranslatef (0.3,-1.9,0.0);
	
		  glTranslatef (0.3,1.3,0.0);
		  glRotatef ((GLfloat) leftleg, 1.0, 0.0, 0.0);
		  glTranslatef(-0.3,-1.3,0.0);
		  
		  glPushMatrix();
		  glScalef (0.6, 1.4, 0.6);
		  glutWireCube (1.0);
		  glPopMatrix();
		  
		  //С��
          glTranslatef (0.0,-0.7,0.0);
		  glRotatef ((GLfloat) LKnee, 1.0, 0.0, 0.0);
		  glTranslatef (0.0,-0.7,0.0);
		  
		  glPushMatrix();
		  glScalef (0.6, 1.4, 0.6);
		  glutWireCube (1.0);
		  glPopMatrix();
		  
          //��
          glTranslatef (0.0, -0.8, 0.2);
		  
		  glPushMatrix();
		  glScalef (0.6, 0.2, 1.0);
		  glutWireCube (1.0);    
		  glPopMatrix();
		  glPopMatrix();
}

/**********************����**********************/

void drawRightleg()
{
	//����
	glPushMatrix();
	glTranslatef (-0.3,-1.9,0.0);
	
		  glTranslatef (0.3,1.3,0.0);
		  glRotatef ((GLfloat) rightleg, 1.0, 0.0, 0.0);
		  glTranslatef (-0.3,-1.3,0.0);
		  
		  glPushMatrix();
		  glScalef (0.6,1.4,0.6);
		  glutWireCube (1.0);
		  glPopMatrix();
		  
          //С��
		  glTranslatef (0.0,-0.7,0.0);
		  glRotatef ((GLfloat) RKnee, 1.0, 0.0, 0.0);
          glTranslatef (0.0,-0.7,0.0);
		  
		  glPushMatrix();
		  glScalef (0.6, 1.4, 0.6);
		  glutWireCube (1.0);
		  glPopMatrix();
		  
          //��
          glTranslatef (0.0, -0.8, 0.2);
		  
		  glPushMatrix();
		  glScalef (0.6, 0.2, 1.0);
		  glutWireCube (1.0);    
		  glPopMatrix();
		  glPopMatrix();
}


void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	
	glLoadIdentity();
	
	gluLookAt(xTranslation , yTranslation  , 8.0 + zTranslation , xTranslation, yTranslation  , 0.0 + zTranslation , 0.0, 1.0 , 0.0);
	
	glRotatef(xRotation , 1.0,0.0,0.0);
	glRotatef(yRotation , 0.0,1.0,0.0);
	
	drawHead();
	drawNeck();
	drawBody();
	drawRightLimb();
	drawLeftLimb();
	drawLeftleg();
	drawRightleg();
	
	glutSwapBuffers();
}

void reshape (int w, int h)
{
	glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
	
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 200.0);
	
	glMatrixMode(GL_MODELVIEW);
	
}

void keyboard (unsigned char key, int x, int y)
{   
	
	switch (key) {
		
		/******����'h' & 'H'�����ֲ�ת��******/
	case 'h':
		RShoulder = (RShoulder - 5) % 360;
		LShoulder = (LShoulder - 5) % 360;
		glutPostRedisplay();
		break;
	case 'H':
		RShoulder = (RShoulder + 5) % 360;
		LShoulder = (LShoulder + 5) % 360;
		glutPostRedisplay();
		break;
		
		/*****����'r' & 'R'��������ת��******/
	case 'r':
		RShoulder = (RShoulder - 5) % 360;
		glutPostRedisplay();
		break;
	case 'R':
		RShoulder = (RShoulder + 5) % 360;
		glutPostRedisplay();
		break;
		
		/*****����'l' & 'L'��������ת��******/
	case 'l':
		LShoulder = (LShoulder - 5) % 360;
		glutPostRedisplay();
		break;
	   case 'L':
		   LShoulder = (LShoulder + 5) % 360;
		   glutPostRedisplay();
		   break;
		   
		   /*****����'f' & 'F'���ƽŲ�ת��*****/
	   case 'f':
		   leftleg= (leftleg - 5) % 360;
		   rightleg= (rightleg - 5) % 360;
		   glutPostRedisplay();
		   break;
	   case 'F':
		   leftleg = (leftleg + 5) % 360;
		   rightleg = (rightleg + 5) % 360;
		   glutPostRedisplay();
		   break;
		   
		   /*****����'w' & 'W'ģ������*****/ 
		   
       case 'w':
	   case 'W':
		   if(flag==1)
		   {  
			   RShoulder = (RShoulder + 5) % 360;
			   LShoulder = (LShoulder - 5) % 360;
			   leftleg= (leftleg + 5) % 360;
			   LKnee=(LKnee + 5)%360;
			   RKnee=(RKnee + 5)%360;
			   rightleg= (rightleg - 5) % 360;
			   glutPostRedisplay();
			   if(leftleg > 30) flag = 2;
		   }
		   if(flag == 2)
		   {
			   RShoulder = (RShoulder - 5) % 360;
			   LShoulder = (LShoulder + 5) % 360;
			   leftleg= (leftleg - 5) % 360;
			   LKnee=(LKnee - 5)%360;
			   RKnee=(RKnee - 5)%360;
			   rightleg= (rightleg + 5) % 360;
			   glutPostRedisplay();
			   if(leftleg < 0) {
				   LKnee=(LKnee + 5)%360;
				   RKnee=(RKnee + 5)%360;
				   flag = 3;
			   }
		   }
		   if(flag == 3)
		   {
			   RShoulder = (RShoulder - 5) % 360;
			   LShoulder = (LShoulder + 5) % 360;
			   leftleg= (leftleg - 5) % 360;
			   LKnee=(LKnee + 5)%360;
			   RKnee=(RKnee + 5)%360;
			   rightleg= (rightleg + 5) % 360;
			   glutPostRedisplay();
			   if(leftleg < -30)  flag = 4;
		   }
		   if (flag == 4 )
		   {
			   RShoulder = (RShoulder + 5) % 360;
			   LShoulder = (LShoulder - 5) % 360;
			   leftleg= (leftleg + 5) % 360;
			   LKnee=(LKnee - 5)%360;
			   RKnee=(RKnee - 5)%360;
			   rightleg= (rightleg - 5) % 360;
			   glutPostRedisplay();
			   if(leftleg >= 0) {
				   
				   flag = 1;
				   LKnee=(LKnee + 5)%360;
				   RKnee=(RKnee + 5)%360;
			   }
		   }
		   break;

		   /*****����'e' & 'E'��������ת��*****/

	   case 'e':
		   RElbow = (RElbow + 5) % 360;
		   LElbow = (LElbow + 5) % 360;
		   glutPostRedisplay();
		   break;
	   case 'E':
		   RElbow = (RElbow - 5) % 360;
		   LElbow = (LElbow - 5) % 360;
		   glutPostRedisplay();
		   break;
	   case 27:
		   
		   break;
	   default:
		   break;
	}
	
}
void mouse(int   button,   int   state,   int   x,   int   y)
{
	if(button == GLUT_LEFT_BUTTON){   
		if(state == GLUT_DOWN)//��������������£�mouse_Lbutton_pressed��λ����¼���λ��   
		{   
			mouse_Lbutton_pressed   =   true;
			mouse_Ldownx   =   x;   
			mouse_Ldowny   =   y;
		}   
		else{			
			mouse_Lbutton_pressed   =   false;   
		} 
	}
	if(button == GLUT_RIGHT_BUTTON){   
		if(state == GLUT_DOWN)//���������Ҽ����£�mouse_Rbutton_pressed��λ����¼���λ��   
		{   
			mouse_Rbutton_pressed   =   true;
			mouse_Rdownx   =   x;   
			mouse_Rdowny   =   y;
		}   
		else{			
			mouse_Rbutton_pressed   =   false;   
		} 
	}
	if(button == GLUT_MIDDLE_BUTTON){   
		if(state == GLUT_DOWN)//���������м����£�mouse_Mbutton_pressed��λ����¼���λ��   
		{   
			mouse_Mbutton_pressed   =   true;
			mouse_Mdownx   =   x;   
			mouse_Mdowny   =   y;
		}   
		else{			
			mouse_Mbutton_pressed   =   false;   
		} 
	}
}

void mouseMove(int x,int y)
{
	if (mouse_Lbutton_pressed) {	
		xTranslation += (mouse_Ldownx - x) / 50.0f; 
		yTranslation -= (mouse_Ldowny - y) / 50.0f;
		mouse_Ldownx = x;
		mouse_Ldowny = y;
		glutPostRedisplay();
	}
	if (mouse_Rbutton_pressed) {	
		yRotation -= (mouse_Rdownx - x) / 3.0f; 
		xRotation -= (mouse_Rdowny - y) / 3.0f;
		mouse_Rdownx = x;
		mouse_Rdowny = y;
		glutPostRedisplay();
	}
	if (mouse_Mbutton_pressed) {	
		zTranslation += (mouse_Mdownx - x) / 10.0f; 		
		mouse_Mdownx = x;		
		glutPostRedisplay();
	}
}

int main()
{
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);//ʹ��˫�����RGB��ɫģʽ
	glutInitWindowSize (500, 500); 
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Hello");
	
	init ();
	
	glutDisplayFunc(display);  
	
	glutReshapeFunc(reshape);  
	
	glutKeyboardFunc(keyboard);
	
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMove);
	
	glutMainLoop();
	return 0;
}