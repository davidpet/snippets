from django.urls import path
from .views import simple_view

urlpatterns = [
    path('simple/', simple_view),
]
