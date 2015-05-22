#include "canimationmanager.h"


CAnimationManager::CAnimationManager()
{
    pAnimation = new QPropertyAnimation();
}

CAnimationManager::~CAnimationManager()
{

}

void CAnimationManager::MoveInOutBack(QWidget *pwgt, int X, int Y, int Duration)
{

    pAnimation->setPropertyName("geometry");
    pAnimation->setTargetObject(pwgt);
    pAnimation->setDuration(Duration);
    pAnimation->setEasingCurve(QEasingCurve::InOutBack);
    pAnimation->setStartValue(pwgt->geometry());
    pAnimation->setEndValue(QRect(X,Y,pwgt->width(),pwgt->height()));
    pAnimation->start();

    /*
    this->setPropertyName("geometry");
    this->setTargetObject(pwgt);
    this->setDuration(Duration);
    this->setEasingCurve(QEasingCurve::InOutBack);
    this->setStartValue(pwgt->geometry());
    this->setEndValue(QRect(X,Y,pwgt->width(),pwgt->height()));
    this->start();
    */
}

void CAnimationManager::MoveLinear(QWidget *pwgt, int X, int Y, int Duration)
{
    pAnimation->setPropertyName("geometry");
    pAnimation->setTargetObject(pwgt);
    pAnimation->setDuration(Duration);
    pAnimation->setEasingCurve(QEasingCurve::Linear);
    pAnimation->setStartValue(pwgt->geometry());
    pAnimation->setEndValue(QRect(X,Y,pwgt->width(),pwgt->height()));
    pAnimation->start();
}

void CAnimationManager::MoveInBack(QWidget *pwgt, int X, int Y, int Duration)
{
    pAnimation->setPropertyName("geometry");
    pAnimation->setTargetObject(pwgt);
    pAnimation->setDuration(Duration);
    pAnimation->setEasingCurve(QEasingCurve::InBack);
    pAnimation->setStartValue(pwgt->geometry());
    pAnimation->setEndValue(QRect(X,Y,pwgt->width(),pwgt->height()));
    pAnimation->start();
}

