#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

#include "dxfrw_intf.h"

class implementation : public DRW_InterfaceImpl {
    virtual void addArc(const DRW_Arc &data);
    virtual void addCircle(const DRW_Circle &data);
    virtual void addEllipse(const DRW_Ellipse &data);
    virtual void addLayer(const DRW_Layer &data);
    virtual void addLine(const DRW_Line &data);
    virtual void addLWPolyline(const DRW_LWPolyline &data);
    virtual void addPoint(const DRW_Point &data);
};
#endif // IMPLEMENTATION_H
