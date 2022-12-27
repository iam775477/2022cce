import processing.sound.*;

SoundFile file;

viod setup()
{
  size(640,360);
  background(255);
  
  file = new SoundFile(this,"beat.aiff");
  file.loop();
}
