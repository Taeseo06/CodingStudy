package com.example.a926mvvm

import androidx.room.Dao
import androidx.room.Insert
import androidx.room.Query


@Dao
interface MainDao {
    @Query("SELECT * FROM mainEntitiy")
    fun getAll() : List<MainEntitiy>

    @Insert
    fun insertAll(vararg entity: MainEntitiy)
}
