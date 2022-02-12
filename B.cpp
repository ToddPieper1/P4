//
// Created by fourt on 2/8/2022.
//

//The invalid entries protected are only for image type, other than that so long as the data type is okay no errors will show
//There's no real need to protect other entries as it's all arbitrary values anyway, at the very least no inputs are protected

#include "B.h"
using namespace std;

B::B() {

}

string B::getFileName() {
    return file_name;
}

void B::setFileName(string fileName) {
    file_name = fileName;
}

string B::getImageType() {
    return image_type;
}

void B::setImageType(string imageType) {
    if (imageType == "PNG" || imageType == "GIF" || imageType == "JPEG") {
        B::image_type = imageType;
    }
    else {
        B::image_type = "PNG (result of invalid/no entry)";
    }
}

string B::getDateCreated() {
    return date_created;
}

void B::setDateCreated(string dateCreated) {
    B::date_created = dateCreated;
}

double B::getSize() {
    return size;
}

void B::setSize(double size) {
    B::size = size;
}

string B::getAuthorName() {
    return author_name;
}

void B::setAuthorName(string authorName) {
    B::author_name = authorName;
}

int B::getWidth() {
    return width;
}

void B::setWidth(int width) {
    B::width = width;
}

int B::getHeight() {
    return height;
}

void B::setHeight(int height) {
    B::height = height;
}

string B::getApertureSize() {
    return aperture_size;
}

void B::setApertureSize(string apertureSize) {
    B::aperture_size = apertureSize;
}

string B::getShutterSpeed() {
    return shutter_speed;
}

void B::setShutterSpeed(string shutterSpeed) {
    B::shutter_speed = shutterSpeed;
}

int B::getIsoValue() {
    return iso_value;
}

void B::setIsoValue(int isoValue) {
    B::iso_value = isoValue;
}

string B::isFlashEnabled() {
    if (flash_enabled) {
        return "true";
    }
    return "false";
}

void B::setFlashEnabled(bool flashEnabled) {
    B::flash_enabled = flashEnabled;
}


