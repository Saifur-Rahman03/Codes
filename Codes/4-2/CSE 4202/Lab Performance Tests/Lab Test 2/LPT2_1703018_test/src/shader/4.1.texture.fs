#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

// texture sampler
uniform sampler2D texture1;

void main()
{
	//FragColor = texture(texture1, TexCoord);
	FragColor = texture(texture1, vec2(TexCoord.x - 1.0f, TexCoord.y)); // for upside down
}