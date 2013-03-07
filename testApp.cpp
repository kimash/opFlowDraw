#include "testApp.h"
using namespace ofxCv;
using namespace cv;
//--------------------------------------------------------------
void testApp::setup(){
    camera.initGrabber(640, 480);
    curFlow = &farneback;
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::update(){
    camera.update();
    
    if(camera.isFrameNew()) {
        curFlow->calcOpticalFlow(camera);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
	camera.draw(0,0,640,480);
    
    ofPushStyle();
    for (int i=0; i<10; i++) {
        ofSetColor(i*5, i*10, i*25, i*25);
        curFlow->draw(10*i,0,640,480);
    }
    ofPopStyle();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}