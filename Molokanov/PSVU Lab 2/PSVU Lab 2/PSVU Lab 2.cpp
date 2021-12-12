#define _USE_MATH_DEFINES
#include <cmath>
#include <glut.h>
int i = 0;
float x = 0.1, z = 0.1;
GLfloat x1, z1, yRotate, xRotate = 15, X, Z;
GLfloat RHand = 0.3, pi = -M_PI / 4, cX, cY, xR = M_PI / 10 * 180 / M_PI;
bool state = true;

float body_dif[] = { 0.3f, 0.3f, 0.3f };
float body_amb[] = { 0.2f, 0.2f, 0.2f };
//float body_spec[] = { 0.6f, 0.6f, 0.6f };
float body_shininess = 0.5f * 128;

float leg_dif[] = { 0.91f, 0.23f, 0.32f };
float leg_amb[] = { 0.81f, 0.13f, 0.22f };
//float leg_spec[] = { 0.6f, 0.6f, 0.6f };
float leg_shininess = 0.5f * 128;

float body_leg_dif[] = { 0.95f, 0.95f, 0.95f };
float body_leg_amb[] = { 0.85f, 0.85f, 0.85f };
//float body_leg_spec[] = { 0.6f, 0.6f, 0.6f };
float body_leg_shininess = 0.5f * 128;

void init(void)
{
    GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
    /*GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };*/
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat AmbientLightPosition[] = { 150.0+X, 110.0, 300.0+Z, 0.0 };
    GLfloat LightAmbient[] = { 0.5, 0.5, 0.5, 1.0 };
    /* ������������� ��������� ��������� ����� */
    glMaterialfv(GL_FRONT, GL_AMBIENT, light_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, light_diffuse);
    /*glMaterialfv(GL_FRONT, GL_SPECULAR, light_specular);*/
    glMaterialfv(GL_FRONT, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_POSITION, AmbientLightPosition);
    glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, LightAmbient);
    /* �������� ��������� � �������� ����� */
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    /* �������� z-����� */
    glEnable(GL_DEPTH_TEST);

}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    glTranslatef( 0.0, 0.0, 0.37);
    
    glRotatef(yRotate, 0.0, 1.0, 0.0);
    

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, body_leg_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, body_leg_dif);
    /*glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, body_leg_pec);*/
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, body_leg_shininess);

    glPushMatrix();
    glRotatef(10.0, 0.9, 0.0, 0.1);
    glTranslatef(-0.116, -0.3, 0.115); // ����� ����
    glScalef(0.5, 1.0, 0.5);
    glutSolidSphere(0.2, 64, 64);
    glPopMatrix();

    glPushMatrix();
    glRotatef(10.0, 0.9, 0.0, 0.1);
    glTranslatef(0.116, -0.3, 0.115); // ������ ����
    glScalef(0.5, 1.0, 0.5);
    glutSolidSphere(0.2, 64, 64);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.01); // ���� �����
    glScalef(0.55, 1.02, 0.55);
    glutSolidSphere(0.49, 200, 200);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.35, 0.01); // ������ �����
    glScalef(0.4, 0.6, 0.4);
    glutSolidSphere(0.441, 200, 200);
    glPopMatrix();


    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, leg_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, leg_dif);
    /*glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, body_spec);*/
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, leg_shininess);

    glPushMatrix();
    glTranslatef(-0.116, -0.51, 0.12); // ����� �����
    glScalef(0.4, 0.1, 0.5);
    glutSolidSphere(0.2, 64, 64);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.116, -0.51, 0.12); // ������ �����
    glScalef(0.4, 0.1, 0.5);
    glutSolidSphere(0.2, 64, 64);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.48, 0.12);
    glRotatef(90.0, 0.0, 0.0, 1.0); // ����
    glScalef(0.2, 0.2, 0.2);
    glutSolidCone(0.15, 1.0, 200, 200);
    glPopMatrix();


    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, body_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, body_dif);
    /*glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, body_spec);*/
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, body_shininess);

    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0); // ����
    glScalef(0.55, 1.0, 0.55);
    glutSolidSphere(0.5, 200, 200);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.35, 0.0); // ������
    glScalef(0.4, 0.6, 0.4);
    glutSolidSphere(0.45, 200, 200);
    glPopMatrix();

    //glPushMatrix();
    //glRotatef(-xRotate, 0.0, 0.0, 1.0);
    //glTranslatef(-0.275, 0.016, 0.0); // ����� ����
    //glScalef(0.1, 0.9, 0.3);
    //glutSolidSphere(0.3, 64, 64);
    //glPopMatrix();
    glPushMatrix();

    glTranslatef(-0.08, 0.29, 0.0);
    glPushMatrix();
    glTranslatef(-cX, cY, 0.0); // ������ ����
    glRotatef(-xR, 0.0, 0.0, 1.0);
    glScalef(0.1, 0.9, 0.3);
    glutSolidSphere(RHand, 64, 64);
    glPopMatrix();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(0.08, 0.29, 0.0);
    glPushMatrix();
    glTranslatef(cX, cY, 0.0); // ������ ����
    glRotatef(xR, 0.0, 0.0, 1.0);
    glScalef(0.1, 0.9, 0.3);
    glutSolidSphere(RHand, 64, 64);
    glPopMatrix();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.1, 0.5, 0.12); // ����� ����
    glScalef(0.1, 0.1, 0.1);
    glutSolidSphere(0.2, 200, 200);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1, 0.5, 0.12); // ������ ����
    glScalef(0.1, 0.1, 0.1);
    glutSolidSphere(0.2, 200, 200);
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}

//void reshape(int w, int h)
//{
//    /* ������������� ������ ������� ������
//     * ������ ������� ����
//     */
//    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//
//    /* ������ ������� �������� � ������ �������� ���� */
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//
//    gluPerspective(
//        40.0, /* ���� ������ � �������� */
//        (GLfloat)w / h, /* ����������� ������ ���� */
//        1, 100.0);  /* ���������� �� ���������� ��������� */
//    glMatrixMode(GL_MODELVIEW);
//
//    glLoadIdentity();
//    gluLookAt(
//        0.0f, 0.0f, -10.0f, /* ��������� ������ */
//        0.0f, 0.0f, -0.01f, /* ����� ����� */
//        0.0f, 0.0f, 1.0f); /* ������������� ����������� ��� y */
//}


void reshape(int x, int y) {
    if (y == 0 || x == 0) return;       // ������������� ����� ������������ �������     
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
                                                            // ���� ������: 40 ��������     
    gluPerspective(40.0, (GLdouble)x / (GLdouble)y, 0.5, 20.0);	// ����� ��������� ��������� ����������: 0,5     
                                                                // ������� ��������� ��������� ����������: 20,0     
    glMatrixMode(GL_MODELVIEW);
    glViewport(0, 0, x, y);  // ������������� ����� ���� ��� rendering 
}

void idleFunc(void) {     
	yRotate -= 0.8;   
    GLfloat AmbientLightPosition[] = { 150.0 + X, 100.0, 300.0 + Z, 0.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, AmbientLightPosition);
    switch(state) {
    case true:
        pi += M_PI / 200;
        xR += 1.2;
        if(pi >= M_PI / 6) state = false;
        break;
    case false:
        pi -= M_PI / 200;
        xR -= 1.2;
        if(pi <= -M_PI / 4) state = true;
        break;
    }

    cX = cos(pi) * 0.29;
    cY = sin(pi) * 0.29;
    X = 800 * cos(M_PI / 220 * i);
    Z = 800 * sin(M_PI / 220 * i);
    i += 1;
	Draw();
}

void main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 800);
    glutCreateWindow("������������ �������");
    glPolygonMode(GL_FRONT, GL_FILL);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    init();
    glutDisplayFunc(Draw); 
    glutReshapeFunc(reshape);
    glutIdleFunc(idleFunc);
    glutMainLoop();
}