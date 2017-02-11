//
// File Name: Container.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include "../conio/conio.h"
#include "../Point/Point.h"
#include "../Dimension/Dimension.h"
#include "../CharMap/CharMap.h"
#include "Container.h"

void Container :: reSetComponents(void) {
	unsigned short x=getX();
	unsigned short y=getY();
	if(frame==false) {
		setWidth(title.length());
		if(getTitle()!="") y+=2;
		for(int i=0; i<cmpnts.size(); i++) {
			Component *cm=cmpnts[i];
			cm->setXY(x, y);
			y=y+ cm->getHeight()+1;
			if(getWidth() < cm->getWidth()) setWidth(cm->getWidth());
		}
		setHeight(y-getY()+1);
	}else{
		setWidth(title.length()+4);
		x+=2;
		y+=2;
		for(int i=0; i<cmpnts.size(); i++) {
			Component *cm=cmpnts[i];
			cm->setXY(x, y);
			y=y+ cm->getHeight()+1;
			if(getWidth() < cm->getWidth()+4) setWidth(cm->getWidth()+4);
		}
		setHeight(y-getY()+1);
	}
}

void Container :: add(Component* c) {
	if(c==NULL) return;
	cmpnts.push_back(c);
	c->setParent(this);
}

void Container :: setComponents(vector<Component*> cmpnts) {
	this->cmpnts=cmpnts;
}

vector<Component*> Container :: getComponents(void) {
	return cmpnts;
}

void Container :: setFrame(bool frame) {
	this->frame=frame;
}

bool Container :: hasFrame(void) {
	return frame;
}

void Container :: setTitle(string title) {
	this->title=title;
}

string Container :: getTitle(void) {
	return title;
}

void Container :: setFrameStyle(LineStyle frameStyle) {
	this->frameStyle=frameStyle;
	if (this->frameStyle == SolidDoubleLine) {
		DOWN_RIGHT_CHAR = DOUBLE_D_R_CHAR;
		DOWN_LEFT_CHAR = DOUBLE_D_L_CHAR;
		UP_RIGHT_CHAR = DOUBLE_U_R_CHAR;
		UP_LEFT_CHAR = DOUBLE_U_L_CHAR;
		HORIZONTAL_CHAR = DOUBLE_H_CHAR;
		VERTICAL_CHAR = DOUBLE_V_CHAR;
	} else if (this->frameStyle == LightSolidLine) {
		DOWN_RIGHT_CHAR = LIGHT_D_R_CHAR;
		DOWN_LEFT_CHAR = LIGHT_D_L_CHAR;
		UP_RIGHT_CHAR = LIGHT_U_R_CHAR;
		UP_LEFT_CHAR = LIGHT_U_L_CHAR;
		HORIZONTAL_CHAR = LIGHT_H_CHAR;
		VERTICAL_CHAR = LIGHT_V_CHAR;
	} else if (this->frameStyle == HeavySolidLine) {
		DOWN_RIGHT_CHAR = HEAVY_D_R_CHAR;
		DOWN_LEFT_CHAR = HEAVY_D_L_CHAR;
		UP_RIGHT_CHAR = HEAVY_U_R_CHAR;
		UP_LEFT_CHAR = HEAVY_U_L_CHAR;
		HORIZONTAL_CHAR = HEAVY_H_CHAR;
		VERTICAL_CHAR = HEAVY_V_CHAR;
	} else if (this->frameStyle == LightDoubleDashLine) {
		DOWN_RIGHT_CHAR = LIGHT_D_R_CHAR;
		DOWN_LEFT_CHAR = LIGHT_D_L_CHAR;
		UP_RIGHT_CHAR = LIGHT_U_R_CHAR;
		UP_LEFT_CHAR = LIGHT_U_L_CHAR;
		HORIZONTAL_CHAR = LIGHT_DOUBLE_DASH_H_CHAR;
		VERTICAL_CHAR = LIGHT_DOUBLE_DASH_V_CHAR;
	} else if (this->frameStyle == HeavyDoubleDashLine) {
		DOWN_RIGHT_CHAR = HEAVY_D_R_CHAR;
		DOWN_LEFT_CHAR = HEAVY_D_L_CHAR;
		UP_RIGHT_CHAR = HEAVY_U_R_CHAR;
		UP_LEFT_CHAR = HEAVY_U_L_CHAR;
		HORIZONTAL_CHAR = HEAVY_DOUBLE_DASH_H_CHAR;
		VERTICAL_CHAR = HEAVY_DOUBLE_DASH_V_CHAR;
	} else if (this->frameStyle == LightTripleDashLine) {
		DOWN_RIGHT_CHAR = LIGHT_D_R_CHAR;
		DOWN_LEFT_CHAR = LIGHT_D_L_CHAR;
		UP_RIGHT_CHAR = LIGHT_U_R_CHAR;
		UP_LEFT_CHAR = LIGHT_U_L_CHAR;
		HORIZONTAL_CHAR = LIGHT_TRIPLE_DASH_H_CHAR;
		VERTICAL_CHAR = LIGHT_TRIPLE_DASH_V_CHAR;
	} else if (this->frameStyle == HeavyTripleDashLine) {
		DOWN_RIGHT_CHAR = HEAVY_D_R_CHAR;
		DOWN_LEFT_CHAR = HEAVY_D_L_CHAR;
		UP_RIGHT_CHAR = HEAVY_U_R_CHAR;
		UP_LEFT_CHAR = HEAVY_U_L_CHAR;
		HORIZONTAL_CHAR = HEAVY_TRIPLE_DASH_H_CHAR;
		VERTICAL_CHAR = HEAVY_TRIPLE_DASH_V_CHAR;
	} else if (this->frameStyle == LightQuadrupleDashLine) {
		DOWN_RIGHT_CHAR = LIGHT_D_R_CHAR;
		DOWN_LEFT_CHAR = LIGHT_D_L_CHAR;
		UP_RIGHT_CHAR = LIGHT_U_R_CHAR;
		UP_LEFT_CHAR = LIGHT_U_L_CHAR;
		HORIZONTAL_CHAR = LIGHT_QUADRULE_DASH_H_CHAR;
		VERTICAL_CHAR = LIGHT_QUADRULE_DASH_V_CHAR;
	} else if (this->frameStyle == HeavyQuadrupleDashLine) {
		DOWN_RIGHT_CHAR = HEAVY_D_R_CHAR;
		DOWN_LEFT_CHAR = HEAVY_D_L_CHAR;
		UP_RIGHT_CHAR = HEAVY_U_R_CHAR;
		UP_LEFT_CHAR = HEAVY_U_L_CHAR;
		HORIZONTAL_CHAR = HEAVY_QUADRULE_DASH_H_CHAR;
		VERTICAL_CHAR = HEAVY_QUADRULE_DASH_V_CHAR;
	}
}

LineStyle Container :: getFrameStyle() {
	return frameStyle;
}

