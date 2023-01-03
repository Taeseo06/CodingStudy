package com.example.a926mvvm

import androidx.room.Database
import androidx.room.RoomDatabase

@Database(entities = [MainEntitiy :: class], version = 1)
abstract class MainDatabase : RoomDatabase() {
    abstract fun mainDao() : MainDao
}