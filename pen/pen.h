#ifndef __PEN__H__
#define __PEN__H__

#include <QObject>
#include <qpainter.h>

class Painter :public QObject, public QPainter
{
    Q_OBJECT

public:
    Painter (QPaintDevice *parent = 0);
    ~Painter ();

private:

};


#endif //__PEN__H__
