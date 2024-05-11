# OpenGL Learning
## Welcome to my OpenGL Learning repository!

This repository serves me as a dedicated space for mastering the OpenGL framework in C++.

### 1. Create a Vertex Buffer Object (VBO):
   - In modern OpenGL, you typically use Vertex Buffer Objects (VBOs) to store vertex data on the GPU.
   - First, generate a buffer ID using **glGenBuffers(1, &vbo)**.
   - Bind the buffer using **glBindBuffer(GL_ARRAY_BUFFER, vbo)**.
   - Upload vertex data to the buffer using **glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW)**.
   - Here, vertices is an array containing the coordinates of the triangle vertices.

### 2. Create a Vertex Array Object (VAO):
   - VAOs store the configuration of vertex attributes.
   - Generate a VAO using **glGenVertexArrays(1, &vao)**.
   - Bind the VAO using **glBindVertexArray(vao)**.
   - Enable vertex attribute arrays using **glEnableVertexAttribArray(index)**.
   - Specify vertex attribute pointers using **glVertexAttribPointer(index, size, type, normalized, stride, offset)**.
     This tells OpenGL how to interpret the vertex data.

### 3. Create a Shader Program:
   - Shaders are small programs that run on the GPU and define how vertices and fragments (pixels) are processed.
   - Create shader objects using **glCreateShader(type)**, where type is **GL_VERTEX_SHADER** or **GL_FRAGMENT_SHADER**.
   - Compile shaders using **glShaderSource(shader, 1, &source, NULL)** and **glCompileShader(shader)**.
   - Create a shader program using **glCreateProgram()** and attach shader objects to it using **glAttachShader(program, shader)**.
   - Link the program using **glLinkProgram(program)**.

### 4. Render the Triangle:
   - Use **glUseProgram(program)** to activate the shader program.
   - Bind the VAO using **glBindVertexArray(vao)**.
   - Draw the triangle using **glDrawArrays(GL_TRIANGLES, 0, 3)**. This specifies to draw a triangle starting from index 0 with 3 vertices.

### 5. Cleanup:
   - Delete the shader objects using **glDeleteShader(shader)**.
   - Delete the shader program using **glDeleteProgram(program)**.
   - Delete the VBO and VAO using **glDeleteBuffers(1, &vbo)** and **glDeleteVertexArrays(1, &vao)**.

