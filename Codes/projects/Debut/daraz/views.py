from django.shortcuts import render
from .models import Profile
# Create your views here.

def index(request):   

    prf = Profile.objects.all()

    return render(request, 'index.html', {'prf': prf })