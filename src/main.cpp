#include<stdio.h>
#include<glad/gl.h>
#include<GLFW/glfw3.h>
using namespace std;
int main(void){
    GLFWwindow* window;
    if(!glfwInit()){
        return -1;
    }
    window = glfwCreateWindow(640,480, "hello world", NULL, NULL);
    if(!window){
        glfwTerminate();
        return -1;
    }
    //to create HEllo triangle we are using shader.
    //defining the cordinates of triangle 
    float points[] = {
        0.5f, -0.5f, 0.0f,          //first point
        -0.5f, -0.5f, 0.0f,         //seconf point 
        0.0f, 0.5f , 0.0f           //third point
    };

    //creating vertex buffer object in graphics card
    //gluint 
    GLuint vbo = 0;
    glGenBuffers(1, &vbo);
    

    glfwMakeContextCurrent(window);
    // loop utill the user stop the window
    while(!glfwWindowShouldClose(window)){
        //glfwWaitEvents(); // use for next events selection

        //render here 
        glClear(GL_COLOR_BUFFER_BIT);

        //drawing pixel
       glDrawPixels(100,100,GL_RGB,GL_UNSIGNED_INT,data);

        //swap front and back buffers
        glfwSwapBuffers(window);

        //poll for and process element

        glfwPollEvents();

    }
    return 0;
}