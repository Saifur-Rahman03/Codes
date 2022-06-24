from django.contrib import admin
from django.urls import path
from tic_tac_toe import views

urlpatterns = [
    path('', views.home),
    path('admin/', admin.site.urls),
]
