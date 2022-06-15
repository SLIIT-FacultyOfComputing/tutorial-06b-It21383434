class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
      void setLength(int l);
      void setHight(int h);
      void setWidth(int w);
       // write prototypes of getters for length, width and height
      int getLength();
      int getHight();
      int getWidth();
      int calcVolume();
};
