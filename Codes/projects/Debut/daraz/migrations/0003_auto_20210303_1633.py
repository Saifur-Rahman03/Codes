# Generated by Django 3.1.7 on 2021-03-03 10:33

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('daraz', '0002_auto_20210303_1633'),
    ]

    operations = [
        migrations.AlterField(
            model_name='profile',
            name='desc',
            field=models.TextField(max_length=100),
        ),
        migrations.AlterField(
            model_name='profile',
            name='desig',
            field=models.TextField(max_length=100),
        ),
    ]