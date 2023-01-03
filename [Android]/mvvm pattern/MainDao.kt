package com.example.mvvmproject

import androidx.room.Dao
import androidx.room.Delete
import androidx.room.Insert
import androidx.room.Query

@Dao
interface MainDao {

    @Query ("SELECT * FROM mainEntity")
    suspend fun getDataAll() : List<MainEntity>

    @Insert
    fun insertData(vararg data: MainEntity)

    @Delete
    fun delete(data: MainEntity)
}