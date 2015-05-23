#ifndef CANIMATIONMANAGER_H
#define CANIMATIONMANAGER_H

#include <QWidget>
#include <QPropertyAnimation>

class CAnimationManager // : public QPropertyAnimation
{
public:
    CAnimationManager();
    ~CAnimationManager();
    void MoveInOutBack(QWidget* pwgt, int X, int Y, int Duration);
    void MoveLinear(QWidget* pwgt, int X, int Y, int Duration);
    void MoveInBack(QWidget* pwgt, int X, int Y, int Duration);
private:
    QPropertyAnimation* pAnimation;

};

#endif // CANIMATIONMANAGER_H
