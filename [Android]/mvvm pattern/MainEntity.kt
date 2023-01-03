package com.example.mvvmproject

import androidx.room.ColumnInfo
import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity
class MainEntity(
    val text: String
) {
    @PrimaryKey(autoGenerate = true)
    var id: Int = 0
}