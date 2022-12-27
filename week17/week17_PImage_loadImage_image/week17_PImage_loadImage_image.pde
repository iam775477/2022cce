PImage img;
void setup()
{
  size(400,400);
  img = loadImage("ABC.jpg");
}
void draw()
{
  image(img,0,0);
}
