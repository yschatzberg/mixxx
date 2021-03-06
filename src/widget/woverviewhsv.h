#ifndef WOVERVIEWHSV_H
#define WOVERVIEWHSV_H

#include "widget/woverview.h"

class WOverviewHSV : public WOverview
{
  public:
    WOverviewHSV(const char *pGroup, ConfigObject<ConfigValue>* pConfig, QWidget * parent);

  private:
    virtual bool drawNextPixmapPart();
};

#endif // WOVERVIEWHSV_H
