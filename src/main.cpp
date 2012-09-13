#include <iostream>
#include "GL/glfw.h"

int main() {
  glfwInit();
  //int glfwInit(void);
  glfwOpenWindow(200, 200,
      0,0,0,
      0,0,0,
      0);
  //void glfwTerminate(void);
  glfwTerminate();
  return 0;
}
