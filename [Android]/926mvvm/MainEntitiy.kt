package com.example.a926mvvm

import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity
class MainEntitiy(val text : String) {
    @PrimaryKey(autoGenerate = true)
    val id : Int = 0

}