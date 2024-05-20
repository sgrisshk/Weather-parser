#pragma once
#include "weatherForecastModel.h"
#include "view.h"
#include "observer.h"
#include <iostream>
#include <gtk/gtk.h>

class AppView : public View, public Observer
{
private:
    WeatherForecastModel *model;

public:
    inline static int argc = 0;
    inline static char **argv = nullptr;

    AppView(WeatherForecastModel *model);
    virtual void Update() override;
    virtual void ShowInfo() override;
    static void init_window(GtkWidget *window);
    static void activate(GtkApplication *app, gpointer user_data);
    //static void display_weather_forecast(GtkWidget *container, const json &forecast_data,GtkWidget *forecast_grid);
    static void display_weather_forecast_5(GtkWidget *forecast_grid, const json &forecast_data);
    static void display_weather_forecast_3(GtkWidget *forecast_grid, const json &forecast_data);
    static void display_weather_forecast_1(GtkWidget *forecast_grid, const json &forecast_data);
};
