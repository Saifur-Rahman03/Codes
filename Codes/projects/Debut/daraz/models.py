from django.db import models

# Create your models here.

class Profile(models.Model):
    
    name = models.CharField(max_length=10)
    img = models.ImageField(upload_to='pics')
    desig = models.TextField(max_length=100)
    desc = models.TextField(max_length=100)
    job = models.BooleanField(default=False)