#ifndef CALENDARVIEW_H
#define CALENDARVIEW_H
#include "Month.h"
#include "View.h"

namespace PlannerCLI{
    class CalendarView : View
    {
        public:
            inline static const int CALENDAR_WIDTH = 51;
            inline static const int DAYS_OF_THE_WEEK = 7;
            inline static const int ITEM_WIDTH = 7;
            inline static const int ITEM_HEIGHT = 3;

            CalendarView();
            ~CalendarView() override;

            void Display() override;

            void Display(Month*& month);

        private:
    };

}

#endif // CALENDARVIEW_H
