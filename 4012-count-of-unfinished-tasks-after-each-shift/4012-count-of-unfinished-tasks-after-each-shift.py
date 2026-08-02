class Solution:
    def countTasks(self, tasks: List[int], shifts: List[int]) -> List[int]:
        n = len(tasks)

        pre_task = [0]*(n+1)
        for i in range(n):
            pre_task[i+1] = pre_task[i]+ tasks[i]


        def task_completed(pre_task, work_done):
            l, r = 0, len(pre_task)-1
            tc = 0

            while l <= r:
                mid = (l+r)//2
                if pre_task[mid] <= work_done : 
                    tc = mid ; l = mid+1
                else :
                    r = mid-1
            return tc

            
        work_done = 0
        ans = []
        for shift in shifts:
            if work_done + shift >= pre_task[-1]:
                ans.append(0)
                work_done = 0
                continue

            work_done += shift
            cnt = task_completed(pre_task, work_done)
            ans.append(n-cnt)

        return ans