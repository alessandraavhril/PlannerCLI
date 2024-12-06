#ifndef CALENDAR_H
#define CALENDAR_H
#include "Model.h"
#include "Year.h"
#include "Month.h"
#include "Day.h"
#include <ctime>
#include <iostream>

namespace PlannerCLI{
    class Calendar : public Model
    {
        public:
            //inline static const int MAX_YEAR = 2106;
            //inline static const int MIN_YEAR = 1970;

            Calendar();
            virtual ~Calendar();

            static int CalculateDayList(const Year& year, const Month& month);

            void Save() override;

            /**
                \details Fill up data.
            */
            void Seed();

        private:
            //Handle 69 years. From 1970-2038.
            //Year* m_year[36];
            //Handle 137 years. From 1970-2106.
            Year** m_year;
    };
}


#endif // CALENDAR_H
