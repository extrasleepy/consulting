#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    ofSetVerticalSync(true);
    
    CGDisplayHideCursor(NULL);
    ofHideCursor();
    
    screenSaver.load("videos/screensaver.mov");
    screenSaver.play();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    videoOne.setLoopState(OF_LOOP_NONE);
    videoTwo.setLoopState(OF_LOOP_NONE);
    videoThree.setLoopState(OF_LOOP_NONE);
    screenSaver.setLoopState(OF_LOOP_NORMAL);
 
    videoOne.update();
    videoTwo.update();
    videoThree.update();
    screenSaver.update();
    
    if (videoOne.getIsMovieDone()==TRUE) {
        videoOne.closeMovie();
        screenSaver.load("videos/screensaver.mov");
        setup();
    }
    
    if (videoTwo.getIsMovieDone()==TRUE) {
        videoTwo.closeMovie();
        screenSaver.load("videos/screensaver.mov");
        setup();
    }
    
    if (videoThree.getIsMovieDone()==TRUE) {
        videoThree.closeMovie();
        screenSaver.load("videos/screensaver.mov");
        setup();
    }

}

//-------------------------------------------------`
 void ofApp::draw(){
    
     
    screenSaver.draw((ofGetWindowWidth()/2)-((screenSaver.getWidth())/2),(ofGetWindowHeight()/2)-(screenSaver.getHeight()/2),screenSaver.getWidth(), screenSaver.getHeight());

    videoOne.draw((ofGetWindowWidth()/2)-((videoOne.getWidth())/2),(ofGetWindowHeight()/2)-(videoOne.getHeight()/2), videoOne.getWidth(), videoOne.getHeight());
    
    videoTwo.draw((ofGetWindowWidth()/2)-((videoTwo.getWidth())/2),(ofGetWindowHeight()/2)-(videoTwo.getHeight()/2), videoTwo.getWidth(), videoTwo.getHeight());
     
      videoThree.draw((ofGetWindowWidth()/2)-((videoThree.getWidth())/2),(ofGetWindowHeight()/2)-(videoThree.getHeight()/2), videoThree.getWidth(), videoThree.getHeight());
    
//    videoThree.draw((ofGetWindowWidth()/2)-((videoThree.getWidth()*1.333)/2.62),(ofGetWindowHeight()/2)-(videoThree.getHeight()/2), videoThree.getWidth()*1.333, videoThree.getHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'q') {
        videoOne.load("videos/one.mov");
        videoOne.play();
        videoTwo.closeMovie();
        videoThree.closeMovie();
        screenSaver.closeMovie();
        
    }
    if(key == 'w') {
        videoTwo.load("videos/two.mov");
        videoTwo.play();
        videoOne.closeMovie();
        videoThree.closeMovie();
        screenSaver.closeMovie();
    }
    
    if(key == 'e') {
        videoThree.load("videos/three.mov");
        videoThree.play();
        videoOne.closeMovie();
        videoTwo.closeMovie();
        screenSaver.closeMovie();
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if(key == 'q') {
        videoOne.load("videos/one.mov");
        videoOne.play();
        videoTwo.closeMovie();
        videoThree.closeMovie();
        
    }
    if(key == 'w') {
        videoTwo.load("videos/two.mov");
        videoTwo.play();
        videoOne.closeMovie();
        videoThree.closeMovie();
    }
    
    if(key == 'e') {
        videoThree.load("videos/three.mov");
        videoThree.play();
        videoOne.closeMovie();
        videoTwo.closeMovie();
    }

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
