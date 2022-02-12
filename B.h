//
// Created by fourt on 2/8/2022.
//
#include <string>
#ifndef B_H
#define B_H
using namespace std;

class B {
public:
    B();

    string getFileName();

    string getImageType() ;

    void setImageType(string imageType);

    string getDateCreated() ;

    void setDateCreated(string dateCreated);

    double getSize() ;

    void setSize(double size);

    string getAuthorName() ;

    void setAuthorName(string authorName);

    int getWidth() ;

    void setWidth(int width);

    int getHeight() ;

    void setHeight(int height);

    string getApertureSize() ;

    void setApertureSize(string apertureSize);

    string getShutterSpeed() ;

    void setShutterSpeed(string shutterSpeed);

    int getIsoValue() ;

    void setIsoValue(int isoValue);

    string isFlashEnabled() ;

    void setFlashEnabled(bool flashEnabled);

    void setFileName(string fileName);

private: //Hard code obvious names/values so that when printed, we will know what isnt working
    string file_name = "NoName";
    string image_type = "NoType";
    string date_created = "NoDate";
    double size = 0.0;
    string author_name = "NoAuthor";
    int width =0, height =0;
    string aperture_size = "NoAperture/0";
    string shutter_speed = "Nothing/1000";
    int iso_value = 0;
    bool flash_enabled = false;
};


#endif B_H
