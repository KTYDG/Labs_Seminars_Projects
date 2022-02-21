#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include <cmath>
#include <glut.h>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int i = 0;
GLfloat x1, z1, yRotate = -50, xRotate = 15, X, Z, LiqY = -4.1;
GLfloat pi = 0, cX, cZ, xR = -M_PI / 8 * 180 / M_PI, zR = M_PI * 180 / M_PI;
GLuint CauldronTex, LiquidTex, FloorTex, Wall1Tex, Wall2Tex, TextTex;
bool state = true, state2 = true;

list<vector<float>>l = {
    {-0.4,  0,      1.05,   0.0f, 0.0f},
    {0.4,   0,      1.05,   0.0f, 1.0f},
    {-0.5,  -0.2,   1.5,    1.0f, 0.0f},
    {0.5,   -0.2,   1.5,    1.0f, 1.0f},
    {-0.6,  -0.8,   1.7,    1.0f, 0.0f},
    {0.6,   -0.8,   1.7,    1.0f, 1.0f},
    {-0.7,  -3,     2,      1.0f, 0.0f},
    {0.7,   -3,     2,      1.0f, 1.0f}
};

float body_dif[] = {0.3f, 0.73f, 0.09f};
float body_amb[] = {0.2f, 0.63f, 0.0f};
float body_shininess = 0.5f * 128;

float eye_dif[] = {1.0f, 1.0f, 1.0f};
float eye_amb[] = {0.6f, 0.6f, 0.6f};
float eye_shininess = 0.5f * 128;

float eyeB_dif[] = {0.1f, 0.1f, 0.1f};
float eyeB_amb[] = {0.0f, 0.0f, 0.0f};
float eyeB_shininess = 0.5f * 128;

float tongue_dif[] = {1, 20 / 255., 147 / 255.};
float tongue_amb[] = {0.8f, 20 / 255. - 0.1, 147 / 255. - 0.1};
float tongue_shininess = 0.5f * 128;

float hat_dif[] = {102 / 255., 0, 1};
float hat_amb[] = {102 / 255. - 0.1, 0, 0.8};
float hat_shininess = 0.5f * 128;

GLuint LoadTexture(const char* filename, int width = 1000, int height = 1000) {//Функция считывания текстуры из файла
    GLuint texture;
    unsigned char* data;
    FILE* file;
    file = fopen(filename, "rb");
    if(file == NULL) return 0; //Не считывать несуществующий файл
    data = (unsigned char*)malloc(width * height * 3);
    fread(data, width * height * 3, 1, file);
    fclose(file);

    for(int i = 0; i < width * height; ++i) {
        int index = i * 3;
        unsigned char B, R;
        B = data[index];
        R = data[index + 2];

        data[index] = R;
        data[index + 2] = B;
    }
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    gluBuild2DMipmaps(GL_TEXTURE_2D, 3, width, height, GL_RGB, GL_UNSIGNED_BYTE, data);
    free(data);

    return texture;
}

void init(void) {
    GLfloat light_ambient[] = {0.0, 0.0, 0.0, 1.0};
    GLfloat light_diffuse[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};
    GLfloat AmbientLightPosition[] = {150.0 + X, 1.0, 300.0 + Z, 0.0};
    GLfloat LightAmbient[] = {0.5, 0.5, 0.5, 1.0};
    /* устанавливаем параметры источника света */
    glMaterialfv(GL_FRONT, GL_AMBIENT, light_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, light_diffuse);
    glMaterialfv(GL_FRONT, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_POSITION, AmbientLightPosition);
    glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, LightAmbient);
    /* включаем освещение и источник света */
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    /* включаем z-буфер */
    glEnable(GL_DEPTH_TEST);
}

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4, 4, -4, 4, -4, 4);
    glTranslatef(0.5, 0.0, 0.0);

    glScalef(0.5, 0.5, 0.5);
    glRotatef(25, 1.0, 0.0, 0.0);
    glRotatef(yRotate, 0.0, 1.0, 0.0);

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, body_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, body_dif);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, body_shininess);

    // тело
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0); 
    glScalef(1.5, 1.0, 2.0);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    
    // голова
    glPushMatrix();
    glTranslatef(0.0, 0.2, 0.72);
    glScalef(1.3, 1.1, 1.4);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();

    // левая
    glPushMatrix();
    glTranslatef(0.11, 0.07, -0.91); 
    glScalef(1.1, 0.7, 1.1);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    // правая
    glPushMatrix();
    glTranslatef(-0.11, 0.07, -0.91);
    glScalef(1.1, 0.7, 1.1);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();

    // лапа задняя левая
    glPushMatrix();
    glTranslatef(0.6, -0.35, -1.35);
    glRotatef(-25, 0.0, 1.0, 0.0);
    glRotatef(-40, 1.0, 0.0, 1.0);
    glScalef(0.45, 0.5, 1.25);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    // лапа задняя правая
    glPushMatrix();
    glTranslatef(-0.6, -0.35, -1.35);
    glRotatef(25, 0.0, 1.0, 0.0);
    glRotatef(-40, 1.0, 0.0, 1.0);
    glScalef(0.45, 0.5, 1.25);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();

    // лапа передняя левая
    glPushMatrix();
    glTranslatef(0.6, -0.35, 1.20);
    glRotatef(-25, 0.0, 1.0, 0.0);
    glRotatef(40, 1.0, 0.0, 1.0);
    glScalef(0.45, 0.5, 1.25);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    // лапа передняя правая
    glPushMatrix();
    glTranslatef(-0.6, -0.35, 1.35);
    glRotatef(25, 0.0, 1.0, 0.0);
    glRotatef(40, 1.0, 0.0, 1.0);
    glScalef(0.45, 0.5, 1.25);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();


    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, eye_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, eye_dif);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, eye_shininess);

    // Левый глаз
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0.7, 0.5, 1.1);
    glScalef(0.5, 0.6, 0.5);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    // Правый глаз
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-0.7, 0.5, 1.1);
    glScalef(0.5, 0.6, 0.5);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();


    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, eyeB_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, eyeB_dif);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, eyeB_shininess);

    // Левый зрачок
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0.87, 0.6, 1.18);
    glScalef(0.3, 0.4, 0.3);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    // Правый зрачок
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-0.87, 0.6, 1.18);
    glScalef(0.3, 0.4, 0.3);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();

    if(l.empty()) {
        // ложка
        glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(cX, -1.0, cZ + 4);
        glRotatef(zR, 0.0, 0.0, 1.0);
        glRotatef(xR, 1.0, 0.0, 0.0);
        glScalef(0.25, 3.0, 0.25);
        glutSolidCube(1.0);
        glPopMatrix();
    }


    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, tongue_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, tongue_dif);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, tongue_shininess);

    // рот
    glPushMatrix();
    glTranslatef(0.0, 0.2, 0.735);
    glScalef(1.28, 0.3, 1.4);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();


    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, hat_amb);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, hat_dif);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, hat_shininess);

    // шляпка
    glPushMatrix();
    glTranslatef(0.0, 1.05, 0.4);
    glRotatef(-9, 1.0, 0.0, 0.0);
    glScalef(1.4, 0.1, 1.55);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();
    // шляпка конус
    glPushMatrix();
    glTranslatef(0.0, 1.1, 0.4);
    glRotatef(-100, 1.0, 0.0, 0.0);
    glScalef(1.05, 1.35, 1.2);
    glutSolidCone(0.8, 2, 200, 200);
    glPopMatrix();

    glPushMatrix();
    if(CauldronTex == 0) CauldronTex = LoadTexture("cauldron.bmp");
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, CauldronTex);
    glEnable(GL_POLYGON_OFFSET_FILL);
    //glColor3f(1.0f, 1.0f, 1.0f);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    glTranslatef(0.0, -2.1, 0.7);
    glScalef(0.8, 0.6, 0.8);
    glBegin(GL_QUAD_STRIP);

    glNormal3f(0.0f, 0.0f, -3.0f);
    glColor3f(1.0, 1.0, 1.0);
    ///
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2, -2, 2);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-2, 2, 2);

    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(2, -2, 2);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2, 2, 2);
    ///
    glNormal3f(3.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(2, -2, 6);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2, 2, 6);
    ///
    glNormal3f(0.0f, 0.0f, 3.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-2, -2, 6);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-2, 2, 6);
    ///
    glNormal3f(-3.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2, -2, 2);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-2, 2, 2);

    glEnd();
    glDisable(GL_POLYGON_OFFSET_FILL);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


    glPushMatrix();
    if(LiquidTex == 0) LiquidTex = LoadTexture("liquid.bmp");
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, LiquidTex);
    glEnable(GL_POLYGON_OFFSET_FILL);
    //glColor3f(1.0f, 1.0f, 1.0f);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    glPushMatrix();
    glTranslatef(0.0, LiqY, 0.7);
    glScalef(0.8, 0.6, 0.8);
    glBegin(GL_QUADS);

    glNormal3f(0.0f, 4.0f, 0.0f);
    glColor3f(1.0, 1.0, 1.0);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2, 1.5, 2);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2, 1.5, 2);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2, 1.5, 6);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-2, 1.5, 6);

    glEnd();
    glPopMatrix();
    //
    glTranslatef(0.0, 0.2, 1);
    glBegin(GL_QUAD_STRIP);
    
    glColor3f(1.0, 0.5, 1.0);
    for(list<vector<float>>::iterator i = l.begin(); i != l.end(); ++i) {
        vector<float>v = *i;
        glTexCoord2f(v[3], v[4]);
        glVertex3f(v[0], v[1], v[2]);
        v.clear();
    }

    glEnd();

    glDisable(GL_POLYGON_OFFSET_FILL);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glTranslatef(1, 0.0, 2.3);

    glPushMatrix();
    if(FloorTex == 0) FloorTex = LoadTexture("floor2.bmp", 522, 521);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, FloorTex);
    glEnable(GL_POLYGON_OFFSET_FILL);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

    glScalef(2, 2, 2);
    glBegin(GL_QUADS);

    glNormal3f(0.0f, 4.0f, 0.0f);
    glColor3f(1.0, 1.0, 1.0);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3, -2, -3);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(6, -2, -3);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(6, -2, 6);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3, -2, 6);

    glEnd();

    glDisable(GL_POLYGON_OFFSET_FILL);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


    glPushMatrix();
    if(Wall1Tex == 0) Wall1Tex = LoadTexture("wall1-2.bmp", 522, 551);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, Wall1Tex);
    glEnable(GL_POLYGON_OFFSET_FILL);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

    glScalef(2, 2, 2);
    glBegin(GL_QUADS);

    glNormal3f(0.0f, 4.0f, 0.0f);
    glColor3f(1.0, 1.0, 1.0);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3, -2, 3);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3, 5, 3);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3, 5, -3);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3, -2, -3);

    glEnd();

    glDisable(GL_POLYGON_OFFSET_FILL);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glPushMatrix();
    if(Wall2Tex == 0) Wall2Tex = LoadTexture("wall2-2.bmp", 522, 552);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, Wall2Tex);
    glEnable(GL_POLYGON_OFFSET_FILL);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

    glScalef(2, 2, 2);
    glBegin(GL_QUADS);

    glNormal3f(0.0f, 4.0f, 0.0f);
    glColor3f(1.0, 1.0, 1.0);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3, -2, -3);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3, 5, -3);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(3, 5, -3);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(3, -2, -3);

    glEnd();

    glDisable(GL_POLYGON_OFFSET_FILL);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


    glPushMatrix();
    if(TextTex == 0) TextTex = LoadTexture("text2.bmp", 930, 294);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, TextTex);
    glEnable(GL_POLYGON_OFFSET_FILL);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); 

    glScalef(2, 2, 2);
    glBegin(GL_QUADS);

    glNormal3f(0.0f, 4.0f, 0.0f);
    glColor3f(1.0, 1.0, 1.0);

    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2.99, 0, 3);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-2.99, 2, 3);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-2.99, 2, -3);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-2.99, 0, -3);

    glEnd();

    glDisable(GL_POLYGON_OFFSET_FILL);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


    glFlush();
    glutSwapBuffers();
}

void reshape(int x, int y) {
    if(y == 0 || x == 0) return;       // Устанавливаем новую проекционную матрицу     
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
                                                                // Угол обзора: 40 градусов     
    gluPerspective(60.0, (GLdouble)x / (GLdouble)y, 0, 200.0);	// Возле плоскости отсечения расстояние: 0,5     
                                                                // Дальний отсечения плоскости расстояние: 20,0     
    glMatrixMode(GL_MODELVIEW);
    glViewport(0, 0, x, y);  // Использование всего окна для rendering
}

void idleFunc(void) {
    //yRotate += 0.6;

    X = 900 * cos(M_PI / 300 * i);
    Z = 900 * sin(M_PI / 300 * i);
    //GLfloat AmbientLightPosition[] = {150.0 + X, 120.0, 300.0 + Z, 0.0};
    //glLightfv(GL_LIGHT0, GL_POSITION, AmbientLightPosition);
    i += 1;

    pi += M_PI / 100;
    cZ = cos(pi) * 1.1;
    cX = sin(pi) * 1.1;

    if(LiqY < -2.1) LiqY += 0.01;
    else if(!l.empty()) {
        l.pop_front();
    }

    switch(state) {
    case true:
        xR += 0.45;
        if(xR >= M_PI / 8 * 180 / M_PI) state = false;
        break;
    case false:
        xR -= 0.45;
        if(xR <= -M_PI / 8 * 180 / M_PI) state = true;
        break;
    }
    switch(state2) {
    case true:
        zR -= 0.5;
        if(zR <= 5*M_PI / 6 * 180 / M_PI) state2 = false;
        break;
    case false:
        zR += 0.8;
        if(zR >= 7*M_PI / 6 * 180 / M_PI) state2 = true;
        break;
    }

    Draw();
}

void main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Шарообразная жаба");
    glPolygonMode(GL_FRONT, GL_FILL);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    init();
    glutDisplayFunc(Draw);
    glutReshapeFunc(reshape);
    glutIdleFunc(idleFunc);
    glutMainLoop();
}