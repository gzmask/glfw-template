#include <iostream>
#include "GL/glfw.h"

int main() {
  glfwInit();
  //int glfwInit(void);
  glfwOpenWindow(200, 200,
      0,0,0,
      0,0,0,
      GLFW_WINDOW);
  //void glfwTerminate(void);
  glfwTerminate();
  return 0;
}
